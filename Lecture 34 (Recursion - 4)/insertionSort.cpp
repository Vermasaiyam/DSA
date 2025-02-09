#include <iostream>
using namespace std;

void insertion(int *arr, int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return;
    }
    // recursive call
    insertion(arr, n - 1);

    // processing
    int key = arr[n - 1];
    int j = n - 2;
    while (j >= 0 && arr[j] > key)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
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

    insertion(arr, 5);
    p(arr, 5);

    return 0;
}