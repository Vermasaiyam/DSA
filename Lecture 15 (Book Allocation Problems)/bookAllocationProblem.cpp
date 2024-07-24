#include <iostream>

using namespace std;

bool isPossible(int arr[], int n , int m , int mid){
    int studentCount = 1;
    int pageSum = 0;
    
    for(int i = 0 ; i<n ; i++){
        if (pageSum + arr[i] <= mid){
            pageSum +=arr[i];
        }
        else{
            studentCount++;
            
            if (studentCount > m || mid < arr[i]){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int bookAllocate(int arr[] , int n , int m){
    int start = 0;
    int sum = 0;
    
    for(int i = 0 ; i<n ; i++){
        sum += arr[i];
    }
    
    int end = sum;
    int ans = -1;
    
    while (start <= end){
        int mid = start + ((end - start)/2);
        if (isPossible(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 1};
    int n = 5;
    int m = 3; //number of students
    
    cout << bookAllocate(arr, n , m) << endl;

    return 0;
}