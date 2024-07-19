#include <iostream>

using namespace std;

// function defination(signature)
void counting(int n){
    
    //function body
    for (int i = 1; i<=n; i++){
        cout << i << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    
    //function call
    counting(n);

    return 0;
}