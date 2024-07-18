#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    // int i = 1;
    // while (i<=n){
    //     cout << i << " ";
    //     i++;
    // }
    
    // sum of n number
    // int sum = 0;
    // while (i<=n){
    //     sum += i;
    //     i++;
    // }
    // cout << "Sum = " << sum;
    
    // prime number
    int i = 1;
    int c;
    while (i<=n){
        if (n%i == 0){
            c++;
        }
        i++;
    }
    if (c == 2){
        cout << "Prime" << endl;
    }
    else{
        cout << " Not Prime" << endl;
    }
    return 0;
}