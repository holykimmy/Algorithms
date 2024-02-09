#include <iostream>
using namespace std;

int sortornot(int arr[], int n)
{
    if (arr[n] == 0 || arr[n] == 1)
    {
        return 1;
    }
    if (arr[n - 1] < arr[n - 2])
    {
        return 0;
    }
    return sortornot(arr,n-1);
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

    int ans = sortornot(arr, n);

    if (ans == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    // bool sorted = false;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] < arr[i + 1])
    //     {
    //         sorted = true;
    //     }

    //     if (arr[i] > arr[i + 1])
    //     {
    //         sorted = false;
    //         break;
    //     }
    //     if (!sorted)
    //     {
    //         break;
    //     }
    // }
    // if (sorted)
    // {
    //     cout << "Yes";
    // }
    // else
    // {
    //     cout << "No";
    // }

    return 0;
}