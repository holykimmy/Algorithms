#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int l, int r, int key)
{
    if (l <= r && key >= arr[l] && key <= arr[r])
    {
        int mid = l + ((double)(r - l) / (arr[r] - arr[l])) * (key - arr[l]);

        cout << mid << " ";

        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] < key)
        {
            return interpolationSearch(arr, mid + 1, r, key);
        }
        else
        {
            return interpolationSearch(arr, l, mid - 1, key);
        }
    }
    return -1;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = interpolationSearch(arr, 0, n - 1, k);
    cout << ans <<  endl;

    return 0;
}
