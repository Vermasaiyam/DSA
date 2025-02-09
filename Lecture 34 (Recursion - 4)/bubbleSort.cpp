#include <iostream>
using namespace std;

void bubble(int* arr, int n){
    if (n==0 || n==1){
        return;
    }
    // find ith largest element and place it in last 
    for (int i=0 ; i<n-1 ; i++){
        if (arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    
    // recursive relation- shorten the array by 1 size
    bubble(arr, n-1);
}

int main()
{
    int arr[] = {2,1,45,9,6};
    bubble(arr, 5);
    
    for (int i=0 ; i<5 ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}