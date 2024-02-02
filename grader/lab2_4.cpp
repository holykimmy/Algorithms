#include <iostream>
using namespace std;

int partition(int arr[], int l, int r)
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

    return j;
}

void quickSort(int arr[], int l, int r)
{
    int p;
    if (l < r)
    {
        p = partition(arr, l, r);
        quickSort(arr, l, p - 1);
        quickSort(arr, p + 1, r);
    }
}

int consen(int arr[], int n)
{
    int counter;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i + 1] - arr[i] == 1)
        {
            counter++;
        }
        else
            count++;
    }
    return count;
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
    quickSort(arr, 0, n - 1);

    int ans = consen(arr, n);
    cout << ans;

    return 0;
}