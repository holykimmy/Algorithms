#include <iostream>
#include <string>
#include <map>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
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

    // Convert sorted array to string
    string sortNtoStr;
    for (int i = 0; i < n; i++)
    {
        sortNtoStr += to_string(arr[i]);
    }

    // output sorted str
    for (int i = 0; i < sortNtoStr.length(); i++)
    {
        cout << sortNtoStr[i];
    }
    cout << endl;

    // dupicate
    string result = string(1, sortNtoStr[0]);
    string dup;

    for (int i = 1; i < sortNtoStr.length(); i++)
    {
        if (sortNtoStr[i] != sortNtoStr[i - 1])
        {
            result += sortNtoStr[i];
        }
        else
        {
            if (sortNtoStr[i] != dup[dup.length() - 1])
            {
                dup += sortNtoStr[i];
            }
        }
    }

    int size = result.length();
    int newArr[size];
    for (int i = 0; i < size; i++)
    {
        newArr[i] = result[i] - '0';
    }

    if (dup.empty())
    {
        map<int, bool> existMap;

        for (int i = 0; i < size; i++)
        {
            int element = newArr[i];
            existMap[element] = true;
        }

        for (auto &value : existMap)
        {
            cout << value.first << " ";
        }
        cout << endl;
    }
    
    else if (dup.length() == 1)
    {
        for (int i = 0; i < dup.length(); i++)
        {
            cout << dup[0] << " ";
        }
        cout << endl;
    }

    else if (dup.length() > 1)
    {
        cout << "กำลังทำซัมติงมั้ง ติดๆๆ" << endl ;
        // for(int i=0 ;i<sortNtoStr.length();i++)
        // {
        //     for(int j=0 ; j<sortNtoStr.length();j++){

        //     }
        // }
    }

    

    for (int i = 0; i < result.length(); i++)
    {
        cout << result[i];
    }
    cout << endl;
}
