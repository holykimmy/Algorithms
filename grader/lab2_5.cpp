#include <iostream>
using namespace std;

struct Cus
{
    int start;
    int end;
};

void bubble_sort(Cus c[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - 1; j++)
        {
            if (c[j].start > c[j + 1].start)
            {
                swap(c[j], c[j + 1]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    Cus c[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> c[i].start >> c[i].end;
    }

    bubble_sort(c, n);

    int maxCus = 0;
    int startH = 0;
    int endH = 0;
    int currentCus = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i].end > c[i + 1].start && c[i].end <= c[i + 1].end)
        {
            endH = c[i].end;
            startH = c[i + 1].start;
           
        }
         currentCus++;
        

        
    }
    cout << startH << " " << endH << " " << currentCus << endl;

    return 0;
}
