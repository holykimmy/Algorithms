#include <iostream>
#include <map>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    // Input for array A
    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Input for array B
    int B[n];
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    int newSize = n + n;
    int newArray[newSize];

    for (int i = 0; i < n; ++i) {
        newArray[i] = A[i];
    }
    for (int i = 0; i < n; ++i) {
        newArray[n + i] = B[i];
    }

    map<int, int> freqMap;
    int maxF = -1;
    

    for (int i = 0; i < n+n; i++) {
        int element = newArray[i];
        freqMap[element]++;
    }

    for ( auto &value : freqMap) {
        maxF = max(maxF, value.second);
    }

    for ( auto &value : freqMap) {
        if (value.second == maxF) {
            cout << value.first << " " << value.second << endl;
        }
    }

    return 0;
}
