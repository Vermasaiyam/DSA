#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,3,3,5};
    int n = 5;
    int k = 3;
    
    // for left occurence

    int start = 0;
    int end = n - 1;
    int temp1, c1=0;

    while (start <= end){
        int mid = start + ((end - start)/2);
        if (arr[mid] == k){
            temp1 = mid;
            end = mid - 1;
            c1++;
        }
        else if (arr[mid] > k){
            end = mid - 1;
        }
        else if (arr[mid] < k){
            start = mid + 1;
        }
    }

    // for last occurence 
    start = 0;
    end = n - 1;
    int temp2, c2=0;

    while (start <= end){
        int mid = start + ((end - start)/2);
        if (arr[mid] == k){
            temp2 = mid;
            start = mid + 1;
            c2++;
        }
        else if (arr[mid] > k){
            end = mid - 1;
        }
        else if (arr[mid] < k){
            start = mid + 1;
        }
    }

    if (c1==0 && c2 == 0){
        temp1 = -1;
        temp2 = -1;
    }

    pair<int,int> p;
    p.first = temp1;
    p.second = temp2;

    cout << p.first << endl << p.second << endl;
    
    cout << "Total number of occurence = " << (temp2 - temp1 + 1) << endl;

}