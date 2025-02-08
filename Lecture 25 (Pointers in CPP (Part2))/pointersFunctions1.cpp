#include <iostream>
using namespace std;

void print(int *p)
{
    cout << p << endl;
    cout << *p << endl;
}

void update(int *p)
{
    p = p + 1;
    // cout << "Inside func " << p << endl;
}

int getSum(int *arr, int n)
{
    cout << "size " << sizeof(arr) << endl;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int value = 5;
    int *p = &value;
    // print(p);
    update(p);

    // cout << "after " << p << endl;
    // cout << p << endl;
    // cout << *p << endl;

    // p = p+1;
    // cout << p << endl;
    // cout << *p << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    cout << getSum(arr + 3, 2) << endl;

    return 0;
}