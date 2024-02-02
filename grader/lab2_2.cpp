#include <iostream>
#include <map>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i -1 ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j+1]);
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

    map<int ,int> diffMap ;

    for(int i = 0 ; i<n ;i++){
        int element = arr[i];
        diffMap[element]++; 
    }
    int count = 0 ; 

    for (auto &value : diffMap){
        count++;
    }

    cout << count << endl;

}