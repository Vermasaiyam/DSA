#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
            if (arr[i][j] ==  target){
                return 1;
            }
        }
    }
    return 0;
}

void printSum(int arr[][4], int row, int col){
    for (int i=0 ; i<3 ; i++){
        int sum=0;
        for (int j=0 ; j<4 ; j++){
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}

void largestRowSum(int arr[][4], int row, int col){
    int maxi = -1;
    int rowIndex = -1;
    for (int i=0 ; i<3 ; i++){
        int sum=0;
        for (int j=0 ; j<4 ; j++){
            sum += arr[i][j];
        }
        if (sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "max sum = " << maxi << endl;
    cout << "At row index" << rowIndex << endl;
}

int main()
{
    // creating a 2D array
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    
    // int ar1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int ar2[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    
    // taking input - row wise
    // for (int i=0 ; i<3 ; i++){
    //     for (int j=0 ; j<4 ; j++){
    //         cin >> arr[i][j];
    //     }
    // }
    
    
    // taking input - column wise
    // for (int i=0 ; i<3 ; i++){
    //     for (int j=0 ; j<3 ; j++){
    //         cin >> arr[j][i];
    //     }
    // }
    
    // printing arr 
    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<4 ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    if (isPresent(arr, 5, 3,4)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    
    
    printSum(arr, 3, 4);
    largestRowSum(arr, 3, 4);

    return 0;
}

