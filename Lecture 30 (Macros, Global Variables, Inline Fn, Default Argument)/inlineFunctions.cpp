#include <iostream>
using namespace std;

inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a = 1, b = 2;

    int ans = getMax(a, b);

    cout << ans;

    a++;
    b--;

    ans = getMax(a, b);
    cout << ans;

    return 0;
}