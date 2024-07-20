#include <iostream>

using namespace std;

void reverse(int arr[],int size){
    // int mid = (size)/2;
    
    // for(int i=0; i<mid; i++){
    //     int t = arr[i];
    //     arr[i] = arr[size-i-1];
    //     arr[size-i-1] = t;
    // }
    
    
    // OR 
    
    
    int start = 0;
    int end = size-1;
    
    while (end > start){
        
        //swap is a fn in cpp to exchange the values
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    cout<< "Reversing an array:"<<endl;
    
    reverse(arr,5);

    
    return 0;
}
