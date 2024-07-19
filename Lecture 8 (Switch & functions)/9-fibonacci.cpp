#include<iostream>
using namespace std;

int fibonacci(int n)
// the n in this fn and in main fn are different..they are creating the copy of each other.. the changes in it is not reflected in other
// it is called pass by value
{
    int a = 0;
    int b = 1;
    for (int i = 2; i < n; i++)
    {
        int next = a + b;
        a = b;
        b = next;
    } 
    return b;
}

int main()
{
    int n;
    cin >> n;
    
    cout << "The " <<n<<"th term of the series is = "<< fibonacci(n) << endl;

    return 0;
}