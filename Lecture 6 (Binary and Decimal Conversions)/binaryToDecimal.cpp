#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number:";
    cin>> n;
    int ans=0;
    int i=0;
    while (n!=0){
        int digit = n % 10;
        if(digit == 1){
            ans = ans + (digit * pow(2,i));
        }
        i++;
        n = n/10;
    }
    
    cout<<"Answer: " << ans;

    return 0;
}