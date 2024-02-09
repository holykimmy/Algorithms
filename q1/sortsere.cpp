#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] ;
    }
    cout << endl;

    string Str;
    for (int i = 0; i < n; i++)
    {
        Str += to_string(arr[i]);
    }
    string result;
    int dup;
    int dupmax = 0;
    int dupcurrent;
    for (int i = 0; i <= Str.length(); i++)
    {
        if (Str[i] != Str[i-1])
        {
            result += to_string
        }
    }
    cout << dup << endl;

    cout << endl;
}