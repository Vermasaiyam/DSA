#include <iostream>
using namespace std;

void update(int **p2)
{
    // p2 = p2 + 1;
    // kch changes nhi honge

    // *p2 = *p2 + 1;
    // isse p ki value change hogi bs

    **p2 = **p2 + 1;
    // isme hmari i k value change hogi
}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    //   cout << i << endl;//5
    //   cout << *p << endl;//5
    //   cout << **p2 << endl;//5

    //   cout << &i << endl; // 710
    //   cout << p << endl; // 710
    //   cout << *p2 << endl; // 710

    //   cout << &p << endl; // 820
    //   cout << p2 << endl; // 820

    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;

    update(p2);
    cout << "After" << endl;
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;

    return 0;
}