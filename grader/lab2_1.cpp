#include <iostream>
using namespace std;

int interpolation_sort(int arr[], int l, int r, int k)
{
    int mid = l + ((double)(r - l) / (arr[r] - arr[l])) * (k - arr[l]);
    // int mid = l + (((k - arr[l]) * (r - l)) / (arr[r] - arr[l]));
    cout << mid << " ";
    while (l < r && k >= arr[l] && k <= arr[r])
    {
        // int mid = l + (((k - arr[l]) * (r - l)) / (arr[r] - arr[l]));
        
        
        if (arr[mid] == k)
        {
            return mid;
        }
        if (arr[mid] < k)
        {
            return interpolation_sort(arr, mid + 1, r, k);
        }
        else
        {
            return interpolation_sort(arr, l, mid - 1, k);
        }
    }
    // return -1;
}

void bubble_sort(int arr[], int n)
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

    int ans = interpolation_sort(arr, 0, n - 1, k);
    cout << ans << endl;

    // for (i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
}