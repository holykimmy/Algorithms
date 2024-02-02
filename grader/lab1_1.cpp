#include <iostream>
using namespace std;

int find_ans(int arr[], int n, int k, int count[])
{
    int i, j;

    int counter = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j <= n - i; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                // cout <<  " i+j "<<arr[i] + arr[j] << endl;
                count[i] = i;
                count[i+1] = j;
                cout << count[0] << " " << count[1] << endl;
                counter++;
            }
        }
    }
    // cout << counter << endl;
    return counter;
}

int main()
{
    int n, i, k;

    cin >> n >> k;
    int arr[n];
    int count[2];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = find_ans(arr, n + 1, k, count);

    // if (ans > 1)
    // {
       
    //    for (int i =0 ; i < 2; i++){
    //     cout << count[i] ;
    //    }
    // }

    // return -1;
    if (ans == 0 ){
        cout << "-1" << endl;
    }
}
