#include <iostream>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int A[n];
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    bool found = false;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (A[i] + A[j] == x) {
                cout << i << " " << j << " ";
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (!found) {
        cout << -1;
    }

    return 0;
}
