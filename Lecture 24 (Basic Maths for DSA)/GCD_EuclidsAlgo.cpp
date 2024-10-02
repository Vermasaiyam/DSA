#include <iostream>

using namespace std;

int gcd(int a, int b){
    // if (a==0)
    //     return b;
    // if (b==0)
    //     return a;
    
    // while (a!=b){
    //     if (a>b){
    //         a=a-b;
    //     }
    //     else{
    //         b=b-a;
    //     }
    // }
    // return a;
    
    //Approach 2
    int ans=1;
    for(int i=1 ; i<=min(a,b) ; i++){
        if (a%i==0 && b%i==0){
            ans = i;
        }
    }
    return ans;
}

int main()
{
    cout<<"GCD of 24 and 72 is = " << gcd(24,72) << endl;

    return 0;
}