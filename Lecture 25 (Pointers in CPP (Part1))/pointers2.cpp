#include <iostream>

using namespace std;

int main()
{
    // pointer to int is created and pointing to some garbage addres
    // int *p;
    // cout << p << endl;
    
    // int *pt = 0;
    // cout << pt << endl;
    
    int i=5;
    
    // both these equivalent to *p = &i;
    int *p = 0;
    p = &i;
    
    cout << p << endl;
    cout << *p << endl;
    
    (*p)++;
    cout << i << endl;
    
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;
    
    
    // pointer arithmatic
    int num = 3;
    int *t = &i;
    cout << *t++ << endl;
    *t = *t+1;
    cout << *t << endl;
    
    cout << "before " << t << endl;
    t = t+1;
    cout << "after " << t << endl;
    

    return 0;
}