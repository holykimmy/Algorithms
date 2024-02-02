#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> freqMap;
    int n = 7;
    int arr[] = {1, 2, 4, 4, 4, 2, 2};
    int maxF = -1;
    int minF = 10000;


    for(int i=0; i<n; i++){
        int element = arr[i];
        freqMap[element]++;
    }


    for ( auto &value : freqMap) {
        maxF = max(maxF, value.second);
        minF = min(minF, value.second);
    }

    cout << maxF-minF;
}
