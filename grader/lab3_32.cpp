#include <iostream>
using namespace std;

int partition(int arr[], int l, int r, int &count)
{
    int x = arr[r], i = l;
    for (int j = l; j <= r - 1; j++)
    {
        if (arr[j] <= x)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[r]);
    return i;
}

int quickSelect(int arr[], int low, int high, int k, int &count)
{
    while (low <= high)
    {
        int pivot = partition(arr, low, high, count);

        if (pivot == k)
        {
            count++;
            return arr[pivot];
        }
        else if (pivot < k)
        {
            count++;
            low = pivot + 1;
        }
        else
        {
            count++;
            high = pivot - 1;
        }
    }

    return -1; // ไม่ควรเกิดขึ้นในกรณีที่ถูกต้อง
}

int main()
{
    int n, k;
    int count;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = quickSelect(arr, 0, n - 1, k - 1, count);
    cout << result << " " << count << endl;

    return 0;
}
