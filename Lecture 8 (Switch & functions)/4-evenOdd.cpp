#include <iostream>

using namespace std;

bool isEven(int n){
    // odd
    if(n&1){
        // return 0;
        return false;
    }
    // even
    return 1;
}

int main()
{
    int num;
    cin >> num;
    if (isEven(num)){
        cout << "Number is even "<<endl;
    }
    else{
        cout << "Number is odd "<<endl;
        
    }

    return 0;
}