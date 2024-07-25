#include <iostream>

using namespace std;

void insertionSort(int arr[], int n){
    for (int i=1 ; i<n ; i++){
        int temp = arr[i];
        int j = i-1;
        while (j>=0){
            if (arr[j] > temp){
                // shift
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1] = temp;
    }
}

void printArr(int arr[], int n){
    for (int i = 0 ; i<n ; i++){
        cout << arr[i] << "\t";
    }
}

int main()
{
    int arr[] = {2,3,1,45,99};
    
    insertionSort(arr, 5);
    
    printArr(arr, 5);

    return 0;
}