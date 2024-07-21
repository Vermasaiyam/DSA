#include <iostream>

using namespace std;



int unique(int arr[], int size){
    int ans = arr[0];
    for (int i = 1 ; i< size ; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[5] = {2,4,7,4,2};
    
    int a = unique(arr, 5);
    
    cout << a << endl;

    return 0;
}
