#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int largest_element(int n, int arr[])
{
    int max_element = -999;
    for (int i = 0; i < n; i++)
    {
        max_element = max(arr[i], max_element);
    }
    return max_element;
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

    // Find and print the largest element
    int max_element = largest_element(n, arr);
    cout << "The largest element in the array is: " << max_element << "\n";

    return 0;
}
