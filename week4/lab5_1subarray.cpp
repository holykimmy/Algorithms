#include <iostream>
#include <climits>
using namespace std;

int max_subarray_sum(int A[], int n)
{
    // Base case: if the array has only one element, return that element

    // Find the middle index
    int m = n / 2;
    if (n == 1)
    {
        return A[0];
    }
    cout << endl;
    cout << "Array Lmss=";
    for (int k = 0; k < n; k++)
    {
        cout << A[k] << " ";
    }
    cout << endl;
    // Find the maximum subarray sum in the left and right halves
    cout << "Lmss"<< "-m" << m << "   " << n << "n   -" <<endl;
    int Lmss = max_subarray_sum(A, m);
    cout << "ArrayRmss =";
    for (int k = 0; k < n; k++)
    {
        cout << A[k] << " ";
    }
    cout << endl;
    cout << "Rmss" + m << "--mid--" << n - m << "***fi***  ";
    int Rmss = max_subarray_sum(A + m, n - m);
    cout << endl;
    // Find the maximum subarray sum that crosses the midpoint
    int lsum = -1000, rsum = -1000, sum = 0;

    // Find the maximum subarray sum on the right of the midpoint
    for (int i = m; i < n; i++)
    {
        cout << " " << A[i] << " testA[i] ";
        sum += A[i];
        cout << endl;
        rsum = max(rsum, sum);
    }

    sum = 0;

    // Find the maximum subarray sum on the left of the midpoint
    for (int i = m - 1; i >= 0; i--)
    {
        cout << " " << A[i] << " testA[i]2 ";
        sum += A[i];
        cout << endl;
        lsum = max(lsum, sum);
    }

    // Return the maximum of the three sums
    cout <<"return"<< n << "n" << endl;
    cout << "++Lmss " << Lmss << "++Rmss " << Rmss << "   lsum" << lsum << "  rsum" << rsum << endl;
    return max(max(Lmss, Rmss), lsum + rsum);
}

int main()
{
    int arr[] = {16, -25, 2, -54, 36, 9, -12, 66};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n = 8;

    int result = max_subarray_sum(arr, n);

    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}
