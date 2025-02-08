#include <iostream>

using namespace std;

int main()
{
    int num=5;
    
    cout << num << endl;
    cout << "Address of num is = " << &num << endl;
    
    int *ptr = &num;
    
    cout << *ptr << endl;
    cout << ptr << endl;
    
    cout << "Size of integer is: " << sizeof(num) << endl;
    cout << "Size of pointer is: " << sizeof(ptr) << endl;
    
    double d=4.3;
    double *p2 = &d;
    
    cout << "Size of pointer is: " << sizeof(p2) << endl;

    return 0;
}