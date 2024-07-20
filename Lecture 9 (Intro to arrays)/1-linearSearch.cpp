#include <iostream>

using namespace std;

bool search(int arr[], int key){
    
    for(int i=0; i<5; i++){
        if (key == arr[i]){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    
    cout << "Enter the element to be searched: ";
    int key;
    cin >> key;
    
    if (search(arr,key)){
        cout << "Element is found."<< endl;
    }
    else{
        cout << "Element is not found."<< endl;
    }

    return 0;
}