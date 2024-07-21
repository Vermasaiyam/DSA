#include <iostream>

using namespace std;

void printArr(int arr[], int size){
    for (int i = 0 ; i< size; i++){
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {1,1,0,0,0,0,1,0};
    
    int i = 0;
    int j = 7;
    
    while (i < j){
        if (arr[i] == 0){
            i++;
        }
        else if (arr[j] == 1)
            j--;
        else if (arr[i]==1 && arr[j] == 0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    
    printArr(arr, 8);

    return 0;
}