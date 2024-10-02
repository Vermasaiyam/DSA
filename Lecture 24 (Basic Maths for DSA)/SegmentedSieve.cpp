#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<long long> prime;

void sieve(int n){

    vector<bool> isprime(n+1, true);
    isprime[0] = isprime[1] = 0;

    for (long long i=2 ; i<=n ; i++){
        if (isprime[i]){
            prime.push_back(i);
            for (long long j=2*i ; j<n ; j+=i){
                isprime[j] = false;
            }
        }
    }

    
}

void segSieve(int l, int h){
    long long sq = sqrt(h);
    sieve(sq);
    vector<bool>isPrime(h-l+1, true);
    
    for (long long p:prime){
        // smallest multiple
        int sm = (l/p)*p;
        if (sm < l){
            sm += p;
        }
        
        for (long long m=sm ; m<=h ; m+=p){
            isPrime[m-l] = false;
        }
    }
    
    // print
    for (long long i=l ; i<=h ; i++){
        if (isPrime[i-l] == true){
            cout << i << " ";
        }
    }
}

int main()
{
    segSieve(6,10);

    return 0;
}