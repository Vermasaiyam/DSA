#include <iostream>

using namespace std;

int setBit(int a, int b){
    int c = 0;
    while (a!=0){
        int bit = a&1;
        
        if (bit){
            c++;
        }
        a = a>>1;
    }
    while (b!=0){
        int bit = b&1;
        
        if (bit){
            c++;
        }
        b = b>>1;
    }
    return c;
}

int main()
{
    int a,b;
    cin >> a>> b;
    cout << "Number of set bit: " << setBit(a,b);

    return 0;
}