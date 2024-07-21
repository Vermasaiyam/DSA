#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0, end = size-1;
    
    while (start <= end){
        int mid = (start+end)/2;
        
        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]> key){
            end = mid-1;
        }
        else if (arr[mid] < key){
            start = mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};
    int key;
    cout << "Enter to search: ";
    cin >> key ;
    
    cout << "Key at index = " << binarySearch(arr, 8 , key);

    return 0;
}