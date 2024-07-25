#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 0 ; i<n-1 ; i++){
        bool swapped = false;
        for (int j=0 ; j<n-i-1 ; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false){
            break;
        }
    }
}

void printArr(int arr[], int n){
    for (int i = 0 ; i<n ; i++){
        cout << arr[i] << "\t";
    }
}

int main()
{
    int arr[] = {22, 4 , 5, 67, 9};
    
    bubbleSort(arr, 5);
    printArr(arr,5);

    return 0;
}