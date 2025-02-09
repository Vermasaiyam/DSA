#include <iostream>
using namespace std;

void selection(int *arr, int n)
{

    // base case
    if (n == 0 || n == 1)
    {
        return;
    }
    // ith minimum element uski position pr laa do
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[min] > arr[i])
        {
            min = i;
        }
    }
    swap(arr[min], arr[0]);

    selection(arr + 1, n - 1);
}

void p(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {5, 4, 3, 21, 1};

    selection(arr, 5);
    p(arr, 5);

    return 0;
}