#include<iostream>
using namespace std;

class Heap{
    public:
        int arr[100];
        int size;
    
        Heap(){
            arr[0] = -1;
            size = 0;
        }
        void insert(int val){
            int idx = ++size;
            arr[idx] = val;

            while (idx > 1){
                int parent = idx/2;
                if (arr[parent] < arr[idx]){
                    swap(arr[parent], arr[idx]);
                }
                idx = idx/2;
            }
        }
        void print(){
            for(int i=1 ; i<=size ; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main(){
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();
}