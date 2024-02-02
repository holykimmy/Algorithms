#include <iostream>
using namespace std;

void find_ans(int arr[],int n ,int k)
{
    int i,j ;
    int count[n];
    int counter = 0;
    for (i = 0; i <= n; i++)
    {
        for (j = 0 ; j <= n+1; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                
                count[i] = i;
                
                count[i + 1] = j;
                
                counter++;
            }
            
        }
       
    }
    
    if (counter >= 1)
    {
        
        cout << count[0] << " " << count[1] << endl;
    }
    else
    {
       cout << "-1" << endl;
    }
}

int main()
{
    int n, i, k;

    cin >> n >> k;
    int arr[n];

    
    for (i = 0; i < n+1; i++)
    {
        cin >> arr[i];
    }
    // for (i = 0; i < n+1; i++)
    // {
    //     cout << arr[i] <<" ";
    // }
    //  cout << endl;

    find_ans(arr,n+1,k);
    
}