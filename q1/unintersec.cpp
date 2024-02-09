#include <iostream>
#include <unordered_set>
using namespace std;

void findUnionIntersection(int A[], int B[], int n) {
    unordered_set<int> unionSet;
    unordered_set<int> intersectionSet;

    // Finding Union
    for (int i = 0; i < n; i++) {
        unionSet.insert(A[i]);
        unionSet.insert(B[i]);
    }

    // Finding Intersection
    for (int i = 0; i < n; i++) {
        if (unionSet.find(A[i]) != unionSet.end() && unionSet.find(B[i]) != unionSet.end()) {
            intersectionSet.insert(A[i]);
        }
    }

    // Output Intersection
    cout << "Intersection: ";
    for (int i = 0; i < n; i++) {
        if (intersectionSet.find(A[i]) != intersectionSet.end()) {
            cout << A[i] << " ";
        }
    }
    cout << endl;

    // Output Union
    cout << "Union: ";
    for (int i = 0; i < n; i++) {
        if (unionSet.find(A[i]) != unionSet.end()) {
            cout << A[i] << " ";
        }
    }
    for (int i = 0; i < n; i++) {
        if (unionSet.find(B[i]) != unionSet.end() && unionSet.find(A[i]) == unionSet.end()) {
            cout << B[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    
    cin >> n;

    int A[n];
    int B[n];

    
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    findUnionIntersection(A, B, n);

    return 0;
}
