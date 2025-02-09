#include <iostream>
using namespace std;

bool linear(int *arr, int size, int key)
{
    // base case
    if (size == 0)
        return false;
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        return linear(arr + 1, size - 1, key);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    if (linear(arr, 5, 42))
    {
        cout << "Yes";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}