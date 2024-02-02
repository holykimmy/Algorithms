#include <iostream>
using namespace std;

int SortorNot(int arr[], int n){
        if (n == 1 || n == 0)
        return 1;

         if (arr[n - 1] < arr[n - 2])
        return 0;

        return SortorNot(arr, n - 1);
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int Ans = SortorNot(arr,n);
    if (Ans == 1){
        cout << "Yes" ;
    }
    else {
        cout << "No" ;
    }
}