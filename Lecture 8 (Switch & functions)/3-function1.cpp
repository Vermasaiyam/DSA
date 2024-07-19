#include <iostream>

using namespace std;

int power(int n1, int n2){
    // cout << a << endl;
    // a cant be called here as it has scope till main function...
    
    int ans = 1;
    for (int i=1; i<=n2; i++){
        ans = ans * n1;
    }
    return ans;
}

int main()
{
    int a,b;
    cout << "enter a and b:"<<endl;
    cin >> a >> b;
    
    cout<< "Answer is: " << power(a,b) << endl;

    return 0;
}
