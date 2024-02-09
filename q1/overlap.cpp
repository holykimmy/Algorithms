#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >>  n;
    int arrA[n];
    int arrB[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arrB[i];
    }

    int newsize = n + n;
    int newArr[newsize] ;
    for (int i=0 ; i<n ; i++){
        newArr[i]= arrA[i];
    }
    for(int i=0 ;i<newsize ;i++){
        newArr[n+i] = arrB[i];
    }

    map<int, int> freqMap;
    int maxF = 0; 
    for(int i=0 ; i< newsize ; i++){
        int element = newArr[i];
        freqMap[element]++;
    }

    for (auto &value :freqMap){
        maxF = max(maxF,value.second);
    }
    for(auto &value :freqMap){
        if(value.second == maxF)
        {
            cout << value.first << " " << value.second ;
        }
    }


}