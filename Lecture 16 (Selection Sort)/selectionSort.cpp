#include <iostream>

using namespace std;

void selectionSort(int arr[], int n){
    for (int i=0 ; i<n-1 ; i++){
        int min = i ;
        for(int j = i+1 ; j<n ; j++){
            if (arr[min] > arr[j]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

void printArr(int arr[], int n){
    for(int i = 0 ; i<n ; i++){
        cout << arr[i] << "\t";
    }
}

int main()
{
    int arr[] = {64,25,12,22,11};
    
    selectionSort(arr, 5);
    
    printArr(arr, 5);
}