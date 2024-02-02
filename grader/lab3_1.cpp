#include <iostream>
#include <map>
using namespace std;

int find_dup(int arr[], int n, int k)
{
    map<int, int> dupMap;
    for (int i = 0; i < n; i++)
    {
        int element = arr[i];
        dupMap[element]++;
    }

    int ans;
    for (auto &value : dupMap)
    {
        if (value.first == k)
        {
            ans = value.second;
        }
    }
    if (ans != 0)
    {
        return ans;
    }
    else if (ans == 0)
    {
        return -1;
    }
}
int main()
{

    int n;
    int k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << find_dup(arr, n, k);
}