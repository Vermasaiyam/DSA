#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{
    cout << src << " ";
    // base case
    if (src == dest)
    {
        cout << "Done" << endl;
        return;
    }
    // processing
    src++;

    // recursive call
    reachHome(src, dest);
}

int main()
{
    int src = 1, dest = 10;
    reachHome(src, dest);

    return 0;
}