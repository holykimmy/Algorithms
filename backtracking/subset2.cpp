#include <iostream>
using namespace std;

void print_sol(int x[], int arr[], int n,int target)
{
   
    for (int i = 1; i <= n; i++)
    {
        cout << x[i] << " " ;
    }
    
}

void subset2(int x[], int arr[], int l, int r, int n)
{
    if (l == r)
    {
        print_sol(x, arr, r,n);
        int j = (l==0) ? 1 : x[l]+1;
        for (int i=j;i<=n;i++){
            x[l+1]=i;
            subset2(arr, x, l+1, r, n);
        }
    }

 }

int main()
{
    int n = 4;
    int arr[] = {0, 25, 10, 9, 2};
    int x[n + 1] ; // set 0
    int target = 36;
    subset2(x, arr, 0, n, n);
    return 0;
}
