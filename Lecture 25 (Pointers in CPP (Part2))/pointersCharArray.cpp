#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl;
    cout << ch << endl;

    char *ptr = &ch[0];
    cout << ptr << endl;
    cout << sizeof(ptr) << endl;

    // single char ka case
    char temp = 'z';
    char *p = &temp;
    cout << p << endl;
    cout << sizeof(p) << endl;

    return 0;
}