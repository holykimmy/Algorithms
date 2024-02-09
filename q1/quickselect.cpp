#include <iostream>
using namespace std;

int partition(int arr[], int l, int r, int &count)
{
    int pivot = arr[l];
    int i = l;
    int j = r + 1;
    while (1)
    {
        do
        {
            i++;
        } while (arr[i] <= pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
        {
            break;
        }
        swap(arr[i], arr[j]);
    }
    swap(arr[l], arr[j]);

    return j;
}

int quickSelect(int arr[], int low, int high, int k, int &count)
{
    while (low <= high)
    {
        int pivotIndex = partition(arr, low, high, count);
        count++;
        if (pivotIndex == k)
        {
            return arr[pivotIndex];
        }
        else if (pivotIndex < k)
        {
            low = pivotIndex + 1;
        }
        else
        {
            high = pivotIndex - 1;
        }
    }

    // Return a sentinel value to indicate an error (e.g., if k is out of bounds)
    return -1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = quickSelect(arr, 0, n - 1, k - 1, count);
    cout << result << " " << count;

    return 0;
}
