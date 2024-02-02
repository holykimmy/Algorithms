#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n], B[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    int newSize = n + n;
    int newArray[newSize];
    for (int i = 0; i < n; i++)
    {
        newArray[i] = A[i];
    }
    for (int i = 0; i < n; i++)
    {
        newArray[n + i] = B[i];
    }


    map<int, int> UnionMap;

    for (int i = 0; i < n+n; i++)
    {
        int element = newArray[i];
        UnionMap[element]++;
    }

    for (auto &value : UnionMap)
    {
        if(value.second != 1){
             cout << value.first << " " ;
        }
    }
    cout << endl ;
    for (auto &value : UnionMap){
        cout << value.first << " " ;
    }

    
}