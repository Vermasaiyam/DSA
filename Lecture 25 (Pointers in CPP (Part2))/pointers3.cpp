#include <iostream>
using namespace std;

int main()
{
    // int arr[10] = {2,5,3};
    
    // cout << "Adress of 1st block = " << arr << endl;
    // cout << "Adress of 1st block = " << &arr[0] << endl;
    
    // cout << *arr << endl;
    // cout << *arr+1 << endl;
    // cout << *(arr+1) << endl;
    // cout << arr[2] << endl;
    // cout << *(arr+2) << endl;
    
    // int i=1;
    // cout << 1[arr] << endl;
    // cout << *(i+arr) << endl;
    
    // cout << sizeof(arr) << endl;
    // int *p = &arr[0];
    // cout << sizeof(p) << endl;
    // cout << sizeof(*p) << endl;
    // cout << sizeof(&p) << endl;
    
    // cout << sizeof(*arr) << endl;
    // cout << sizeof(&arr) << endl;
    
    
    // int arr[20] = {1,2,3,4};
    
    // cout << &arr[0] << endl;
    // cout << &arr << endl;
    // cout << arr << endl;
    
    // int *p = &a[0];
    
    // cout << p << endl;
    // cout << *p << endl;
    // cout << &p << endl;
    
    
    int arr[10];
    // arr = arr+1;// error
    int *p = &arr[0];
    cout << p << endl;
    p=p+1;
    cout << p << endl; // no error

    return 0;
}