#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, long long> memo;

long long power(int a, int n, int &count)
{
    if (n == 0)
    {
        return 1;
    }

    if (memo.find(n) != memo.end())
    {
        return memo[n];
    }
    count++;
    long long halfPower = power(a, n / 2, count);
    long long result = (n % 2 == 0) ? halfPower * halfPower : halfPower * halfPower * a;

    memo[n] = result;
    return result;
}

int main()
{
    int a, n;
    int count = 0;
    cin >> a;

    cin >> n;

    long long result = power(a, n, count);
    cout << result << " " << count << endl;

    return 0;
}
