#include <iostream>
using namespace std;


int insertion_sort(int arr[], int n, int k ,int arrdif[])
{
    int i, j, v;
    for (i = 1; i <= n - 1; i++)
    {
        v = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > v)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = v;
    }

    // int arrdif[2];
    int difmin = 1000;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n - i ; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                if (arr[j] - arr[i] < difmin)
                {
                    arrdif[0] = arr[i];
                    arrdif[1] = arr[j];
                    difmin = arrdif[1] - arrdif[0];
                    // cout << " difmin " << difmin << endl;
                    // cout << arrdif[0] << " " << arrdif[1] << endl;
                }
            }
        }
    }

    return difmin;
}



int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int arrdif[2] ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = insertion_sort(arr, n, k, arrdif);

    if (ans != 1000)
    {
        cout << arrdif[0] << " " << arrdif[1] << endl;
    }
    // int ans = binary_search(arr, 0, n, k);
    // cout << ans << endl;
}