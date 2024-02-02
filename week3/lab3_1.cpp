#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int r)
{
    int pivot, i, j;
    pivot = a[l];
    i = l;
    j = r + 1;

    while (1)
    {
        do
        {
            ++i;
        } while (a[i] <= pivot);

        do
        {
            --j;
        } while (a[j] > pivot);
       

        if (i >= j)

            break;

        swap(a[i], a[j]);
    }

    swap(a[l], a[j]);
    
    return j;
}

void quickSort(int s[], int l, int r)
{

    
    int p;
    if (l < r)
    {
        p = partition(s, l, r);
        
        quickSort(s, l, p - 1);
        
        quickSort(s, p + 1, r);
       
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

    quickSort(arr, 0, n - 1);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
