#include <iostream>
using namespace std;

void print_sol(int x[], int arr[], int n,int target)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x[i] == 1)
        {
            sum += arr[i];
        }
    }
    if (sum == target)
    {
        for (int i = 1; i <= n; i++)
        {
            if (x[i] == 1)
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
}

void subset1(int x[], int arr[], int l, int r, int target)
{
    if (l == r)
    {
        print_sol(x, arr, r,target);
    }
    else
    {
        x[l + 1] = 0;
        subset1(x, arr, l + 1, r, target);
        x[l + 1] = 1;
        subset1(x, arr, l + 1, r, target);
    }
}

int main()
{
    int n = 4;
    int arr[] = {0, 25, 10, 9, 2};
    int x[n + 1] ; // set 0
    int target = 36;
    subset1(x, arr, 0, n, target);
    return 0;
}
