#include <iostream>
#include <limits>

using namespace std;

int max(int arr[]){
    // int max = INT_MIN;
    int maxi = arr[0];
    
    for (int i = 0; i<5 ; i++){
        
        maxi = max(maxi,arr[i]);
        // if (arr[i] > max){
        //     max = arr[i];
        // }
    }
    return maxi;
}

int min(int arr[]){
    // int min = INT_MAX;
    int mini = arr[0];
    
    for (int i = 0; i<5 ; i++){
        
        mini = min(mini,arr[i]);
        // if (arr[i] < min){
        //     min = arr[i];
        // }
    }
    return mini;
}

int main()
{
    int arr[5];
    
    //taking input
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    cout << "maximum: "<< max(arr) << endl;
    cout << "minimum: "<< min(arr) << endl;
    
    
    return 0;
}
