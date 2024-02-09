#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void permute(int arr[], int start, int end)
{
    if (start == end)
    {
        bool valid = true;
        for (int i = 1; i <= end; i++)
        {
            if (arr[i] == 2 && arr[i - 1] == 3 || arr[i] == 3 && arr[i - 1] == 2)
            {
                
                valid = false;
                break;
            }
        }

        if (valid)
        {
            for (int i = 1; i <= end; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    for (int i = start; i <= end; i++)
    {
        
        swap(arr[start], arr[i]);     // swap elements
        permute(arr, start + 1, end); // recursive permuta
        swap(arr[start], arr[i]);     // undo th swap
    }
   
}

int main()
{
    int n = 3;
    int arr[] = {-1, 1, 2, 3};
    permute(arr, 1, n);
    return 0;
}