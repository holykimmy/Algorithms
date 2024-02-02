#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int r)
{
cout << "รับ" << l << " " << r << endl ;
    int pivot, i, j;
    pivot = a[l];
    i = l;
    j = r + 1;

    cout << "ทำอยู๋ทำอ"  << endl ;

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
        {
            cout << "เข้า i >= j " << i << " " << j << endl;
        }
        else
        {
            cout << "ไม่เข้า i >= j " << i << " " << j << endl;
        }

        if (i >= j)

            break;

        swap(a[i], a[j]);

        cout << "af swap1: ";
        for (int i = 0; i < 8; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    swap(a[l], a[j]);
    cout << "af swap2: ";
    for (int i = 0; i < 8; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout <<"return j:"<< j << endl;
    return j;
}

void quickSort(int s[], int l, int r)
{

    cout << "s" << " " << l << " " << r << endl;
    int p;
    if (l < r)
    {
        p = partition(s, l, r);
        cout <<"p:"<< p <<"r: "<<r<< endl;
        cout << "q1" << " " << l << " " << r << endl;
        quickSort(s, l, p - 1);
        cout << "q2" << " " << l << " " << r << endl;
        cout <<"p2:"<< p <<"r2: "<<r<< endl;
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
