#include <iostream>

using namespace std;

bool uniqueOccurrences(int arr[6]) {
        int a[3];
        int size = sizeof(arr)/sizeof(arr[0]);
        int k = 0;
        for (int i = 0 ; i<size ; i++){
            int count = 0;
            int c = arr[i];
            for(int j = 0 ; j<size; j++){
                if (j==i){
                    continue;
                }
                if (c == arr[j] && i!=j){
                    count++;
                }
            }
            a[k++] = count;
            
        }
        int ans = a[0];
        
        for (int i = 1; i<(sizeof(a)/sizeof(a[0])) ; i++){
            ans = ans ^ a[i];
            cout << ans<< endl;
        }
        if (ans!=0){
            return true;
        }
        return false;
    }

int main()
{
    int arr[] = {1,2,2,1,1,3};
    cout<< uniqueOccurrences( arr);

    return 0;
}