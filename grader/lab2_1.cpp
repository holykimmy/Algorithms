#include <iostream>
using namespace std;

int interpolation(int arr[], int l, int r, int k)
{
    if (l < r && k >= arr[l] && k <= arr[r])
    {
        int mid = l + (((k - arr[l]) * (r - 1)) / (arr[r] - arr[l]));
        cout << mid << " ";
        if (arr[mid] == k)
        {
            return mid;
        }
        if (arr[mid] < k)
        {
            return interpolation(arr, mid + 1, r, k);
        }
        else
        {
            return interpolation(arr, l, mid - 1, k);
        }
    }
}

int bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n, i, k;
    cin >> n >> k;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr, n);

    interpolation(arr, 0, n - 1, k);

    // for (i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
}