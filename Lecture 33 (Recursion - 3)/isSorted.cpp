#include <iostream>
using namespace std;

bool isSorted(int *arr, int size)
{
    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return isSorted(arr + 1, size - 1);
    }
}

int sum(int *arr, int size)
{
    if (size == 1)
    {
        return arr[0];
    }
    else
    {
        return arr[0] + sum(arr + 1, size - 1);
    }
}

int main()
{
    int arr[] = {1, 2, 13, 4, 5};
    int size = 5;

    bool ans = isSorted(arr, size);

    if (ans)
        cout << "Yes";
    else
        cout << "No";

    cout << sum(arr, size);

    return 0;
}