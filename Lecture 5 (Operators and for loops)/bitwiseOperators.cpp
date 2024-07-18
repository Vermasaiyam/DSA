#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 2;
    cout<<"a & b: " << (a&b) << endl;
    cout<<"a | b: " << (a|b) << endl;
    cout<<"~a: " << (~a) << endl;
    cout<<"a ^ b: " << (a^b) << endl;
    
    cout << (17<<1) << endl;
    cout << (17<<2) << endl;
    cout << (17>>1) << endl;
    cout << (17>>2) << endl;

    // pre and post increment and decrement

    return 0;
}