#include <iostream>

using namespace std;


// 0 = not ; 1 = prime;
bool isPrime(int n){
    for (int i=2 ; i<n ; i++){
        if (n%1){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    if (isPrime(n)){
        cout << "Prime"<< endl;
    }
    else{
        cout << "Not Prime" << endl;
    }

    return 0;
}