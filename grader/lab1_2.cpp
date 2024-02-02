#include <iostream>

using namespace std;

int maxConti(int arr[], int n) {
    if (n == 0) {
        return 0;
    }

    int maxS = arr[0];
    int maxF = arr[0];

    for (int i = 1; i < n; ++i) {
        maxS= max(arr[i], maxS + arr[i]);
        maxF = max(maxF, maxS);
    }

    return maxF;
}

int main() {
 
    int n ;
    cin >> n ;
    int arr[n];
    for(int i=0;i<n ;i++){
        cin >> arr[i] ;
    }

    int ans = maxConti(arr,n);
    cout << ans ;
    return 0;
}
