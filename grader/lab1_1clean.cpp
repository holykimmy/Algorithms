#include <iostream>
using namespace std;

void find_ans(int arr[],int n ,int k)
{
    int i,j ;
    int count[10];
    int counter = [0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] + arr[i + j] == k)
            {
                cout << i << " " << j << endl ;
                found = true;
                break;
            }
        }
        if(found){
            break;
        }
    }
    
    if(!found){
       cout << "-1" << endl;
    }
}

int main()
{
    int n, i, k;

    cin >> n >> k;
    int arr[n];
    
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    find_ans(arr,n,k);
    
}