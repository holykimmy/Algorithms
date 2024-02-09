#include <iostream>
using namespace std;
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high + 1;
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
        if (i > j)
        {
            break;
        }
        swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void quick_sort(int arr[], int l, int r)
{
    int p;
    if (l < r)
    {
        p = partition(arr, l, r);
        quick_sort(arr, l, p - 1);
        quick_sort(arr, p + 1, r);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quick_sort(arr, 0, n - 1);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    int maxc = 0;
    int minc = 100;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;
        }
        else
        {
            maxc = max(maxc, count);
            minc = min(minc, count);
            count = 1;
        }
    }
    maxc = max(maxc, count);
    minc = min(minc, count);
    cout << maxc - minc;
}