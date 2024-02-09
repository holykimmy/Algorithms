#include <iostream>
using namespace std;

int partition(int arr[], int l, int r)
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
void quick_sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int p = partition(arr, l, r);
        quick_sort(arr, l, p - 1);
        quick_sort(arr, p + 1, r);
    }
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

    int i, j;
    bool found = false;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j <= n ; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                found = true;
                cout << i << " " << j << endl;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }
    
    if (!found)
    {
        cout << -1 << endl;
    }

    return 0;
}