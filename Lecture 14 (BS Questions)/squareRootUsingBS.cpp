#include <iostream>

using namespace std;

long long int introot(int n){
    int start = 0;
    int end = n;
    long long int ans = -1;
    
    while (start <= end){
        long long int mid = start + ((end-start)/2);
        long long int square = mid*mid;
        
        if (square == n){
            return mid;
        }
        else if (square > n){
            end = mid-1;
        }
        else{
            ans = mid;
            start = mid+1;
        }
    }
    return ans;
}

double precision(int n, int digits , int intsol){
    
    double factor = 1;
    double ans = intsol;
    
    for (int i = 0 ; i<digits ; i++){
        factor = factor/10;
        
        for (double j = ans ; j*j < n ; j = j+factor){
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    
    int intsol = introot(n);
    
    cout << precision(n, 3, intsol) << endl;
}
