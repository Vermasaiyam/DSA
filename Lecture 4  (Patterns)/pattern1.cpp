#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int row =1;
    int column =1;
    while (row<=n){
        column = 1;
        while (column<=n){
            cout << "* ";
            column++;
        }
        cout << "\n";
        row++;
    }

    return 0;
}