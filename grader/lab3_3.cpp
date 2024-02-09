#include <iostream>
using namespace std;

int partition(int arr[], int l, int r, int &count)
{
    
    int pivot, i, j;
    pivot = arr[l];
    i = l;
    j = r + 1;
    while (1)
    {
        do
        {
            ++i;
        } while (arr[i] <= pivot);

        do
        {
            --j;
        } while (arr[j] > pivot);

        if (i >= j)

            break;

        swap(arr[i], arr[j]);
    }

    swap(arr[l], arr[j]);
count++;
    return j;
}

int quicksort(int arr[], int low, int hight, int k, int &count)
{
    if (low == hight)
    {

        return arr[low];
    }

    if (low <= hight)
    {
        int p = partition(arr, low, hight, count);

        if (k == p)
        {

            return arr[p];
        }
        else if (k < p)
        {

            return quicksort(arr, low, p - 1, k, count);
        }
        else
        {
            k = k - p - 1 ;

            return quicksort(arr, p + 1, hight, k, count);
        }
    }
    
}
int main()
{
    int n;
    int k;
    int count = 0;

    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = quicksort(arr, 0, n - 1, k, count);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << ans << " " << count;
}