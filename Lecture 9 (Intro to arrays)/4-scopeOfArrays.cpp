#include <iostream>

using namespace std;

void update(int arr[]){
    cout << endl << "Printing inside the update fn" << endl;
    
    arr[0] = 120;
    
    for (int i=0 ; i<3 ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << " Going back to main function" << endl;
    
}

int main()
{
    int arr[] = {1,2,3};

    for (int i=0 ; i<3 ; i++){
        cout << arr[i] << " ";
    }
    
    update(arr);
    
    // here array has been updated in other fn and the changes are reflected in the main fn also unlike the other variables studied earlier
    
    // assa isliye hua kyki yha ham array fn call m pass krte time array ke 1st element ka address pass krre hai na ki pura array
    
    for (int i=0 ; i<3 ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
