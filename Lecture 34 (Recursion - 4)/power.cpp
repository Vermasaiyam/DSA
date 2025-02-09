#include <iostream>
using namespace std;

int power(int a, int b)
{
    // base case
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    // recusive relation
    int ans = power(a, b / 2);

    if (b & 1)
    {
        // if b is odd
        return a * ans * ans;
    }
    else
    {
        // if b is even
        return ans * ans;
    }
}

int main()
{
    cout << power(2, 5);

    return 0;
}