#include <iostream>
using namespace std;

class Heap
{
public:
    int arr[100];
    int size;

    Heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        int idx = ++size;
        arr[idx] = val;

        while (idx > 1)
        {
            int parent = idx / 2;
            if (arr[parent] < arr[idx])
            {
                swap(arr[parent], arr[idx]);
            }
            idx = idx / 2;
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "nothing to delete" << endl;
            return;
        }

        // put last node element at root node
        arr[1] = arr[size];

        // remove lase node
        size--;

        // put root node at corect position
        int i = 1;

        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (leftIndex < size && arr[i] < arr[leftIndex] && arr[leftIndex] > arr[rightIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }

            else if (rightIndex < size && arr[i] < arr[rightIndex] && arr[leftIndex] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }

            else
            {
                return;
            }
        }
    }
};

void heapify(int arr[], int n , int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if (left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    if (largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
    return;
}

void heapSort(int arr[], int n){
    int size = n;
    while (size > 1){
        swap(arr[1], arr[size]);
        size--;

        heapify(arr, n, 1);
    }
}

void buildMaxHeap(int arr[], int n){
    buildMaxHeap(arr, n);

    for(int i=n/2 ; i>0 ; i--){
        heapify(arr, n, i);
    }
}

int main()
{
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1, 54,53,55,52,50};
    int n = 5;

    heapSort(arr, n);

    cout << "sorted array ";
    for(int i=1 ; i<=n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}