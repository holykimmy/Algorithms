#include <iostream>
using namespace std;

int power(int a, int n ,int &count) {
    if (n == 0) {
        return 1;
    }
    count++ ;
    int halfPower = power(a, n / 2 , count);
    
    int result = halfPower * halfPower;

    if (n % 2 == 1) {
        result *= a;
    }
    a *= a;
    n /= 2;

    return result;
}

int main() {
    int a, n;
  int count = 0;
    cin >> a;
    cin >> n;

    long long result = power(a, n , count);
    cout << result << " " <<count ;

    return 0;
}
