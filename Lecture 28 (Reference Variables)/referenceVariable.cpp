#include <iostream>
using namespace std;

int &func(int n)
{
    // ye warning dega bhai kyuki na 'a' jo hai issi function tk scope rkhta hai uske bhar jate hi mrr jata hai
    int a = 10;
    int &ans = a;
    return ans;
}

int *fun(int n)
{
    int *ptr = &n;
    return ptr;
    // same upr vali dikkat hai ki ptr jo hai local variable hai
}

void update2(int &n)
{
    n++;
}

void update1(int n)
{
    n++;
}

int main()
{
    // int i=5;
    // // create a reference variable
    // int &j = i;
    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << i << endl;
    // cout << j << endl;

    int n = 5;
    cout << n << endl;
    // update1(n);
    update2(n);
    cout << n << endl;

    func(n);

    return 0;
}