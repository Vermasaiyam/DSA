#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        //accessing the array
        cout << arr[i] << endl;
    }
}

int main()
{
    //declare the array
    int ar[6];
    
    // initialize array with 0
    // int ar[10] = {0};
    
    // initialize array with same value other than 0
    fill_n(ar,6,2);
    
    printArray(ar, sizeof(ar)/sizeof(ar[0]));
    
    
}

