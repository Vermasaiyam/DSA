#include <iostream>
using namespace std;

int fact(int n)
{
    // base case
    if (n == 0)
        return 1;

    int ans = n * fact(n - 1);
    return ans;
}

int power(int n)
{
    // base case
    if (n == 0)
        return 1;

    return 2 * power(n - 1);
}

int main()
{
    int n = 5;
    cout << fact(n);
    cout << endl;
    cout << power(n);

    return 0;
}