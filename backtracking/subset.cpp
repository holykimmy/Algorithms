#include <iostream>
using namespace std;

void subset1(int x[], int arr[], int l, int r, int target)
{
    int sum = 0;
    if (l == r)
    {
        int sum = 0;
        for (int i = 1; i <= r; i++)
        {
            cout << x[i] << " " ;
            if (x[i] == 1)
            {
                sum += arr[i];
            }
        }
        cout << sum <<endl;
        if (sum == target)
        {
            for (int i = 1; i <= r; i++)
            {
                cout << x[i] << "-----x--------";
                if (x[i] == 1)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
    }
    else
    {
        x[l + 1] = 0;
        subset1(x, arr, l + 1, r, target);
        x[l + 1] = 1;
        subset1(x, arr, l + 1, r, target);
    }
}

int main()
{
    int n = 4;
    int arr[] = {0, 25, 10, 9, 2};
    int x[n + 1]; // set 0
    int target = 36;
    subset1(x, arr, 0, n, target);
    return 0;
}
