#include <iostream>

using namespace std;

int pivot(int arr[], int n){
    int start = 0;
    int end = n - 1;
    
    while (start < end){
        int mid = start + ((end-start)/2);
        
        if (arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start;
}

int main()
{
    int arr[] = {7,8,1,2,3};
    
    cout << pivot(arr, 5);

    return 0;
}