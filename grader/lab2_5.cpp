#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
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

    for (int i = 0; i < n; i++)
    {
        if (arrA[i] <= arrB[i] && arrA[i + 1] > arrB[i])
        {
            if (arrA[i + 1] >= arrB[i])
            {
                cout << arrB[i] << " " << arrA[i + 1] << " " << n << endl;
                break; 
            }
        }

        else if (arrA[i + 1] < arrB[i])
        {
            cout << arrA[i] << " " << arrA[i + 1] << " " << 1 << endl;
            break; 
        }
    }
    return 0;
}
