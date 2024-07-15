// Swap the consecutive element
// We can get kth largest we can use bubble sort. We can loop the outer as much only how many kth element we want
// We can make bubble Sort apaptive by using flag in the if condition that if any swap occur make the flag 1 and if not just break out of the loop.
#include <iostream>
using namespace std;

void bubbleSort(int a[], int size)
{
    int flag;
    for (int i = 0; i < size - 1; i++)
    {
        flag = 0;
        // j should run (n-i) time as the last element is already sorted
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{
    int a[] = {56, 45, 78, 23, 19, 90};
    int size = sizeof(a) / sizeof(a[0]);

    bubbleSort(a, size);

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
