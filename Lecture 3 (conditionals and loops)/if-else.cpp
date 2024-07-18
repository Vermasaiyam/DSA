
#include <iostream>

using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // // cout<< "value of n is:" << n << endl;
    
    // if (n>0){
    //     cout << n << " is Positive" << endl;
    // }
    // else{
    //     cout << n << " is Negative" << endl;
    // }
    
    int a,b;
    // cin >> a >> b;
    // cout << "value of a is " << a << " and b is " << b << endl;
    
    //a = cin.get(); //1 2... ye isko character ki treh lega..isme 1 ko character lega jo 49 hota h int main546546
    // cout << "value of a is: " << a << endl;
    
    cout << "enter the value of a: " << endl;
    cin >> a;
    cout << "enter the value of b: " << endl;
    cin >> b;
    
    if (a>b){
        cout << "a is greater" << endl;
    }
    else{
        cout << "b is greater " << endl;
    }
    
    return 0;
}