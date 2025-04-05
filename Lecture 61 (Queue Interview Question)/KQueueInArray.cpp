/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class kQueue
{
public:
    int n;
    int k;
    int *arr;
    int *rear;
    int *front;
    int *next;
    int freespot;

public:
    kQueue(int N, int K)
    {
        n = N;
        k = K;
        arr = new int[n];
        rear = new int[k];
        front = new int[k];
        next = new int[n];

        int freespot = 0;

        // initialise rear and front
        for (int i = 0; i < k; i++)
        {
            rear[i] = front[i] = -1;
        }

        // initialize next
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
    }

    void enqueue(int data, int qn)
    {
        // overflow condition
        if (freespot == -1)
        {
            return;
        }
        // find index
        int index = freespot;
        // update freespot
        freespot = next[index];

        // if 1st element
        if (front[qn - 1] == -1)
        {
            front[qn - 1] = index;
        }
        else
        {
            // link new ele to prev ele
            next[rear[qn - 1]] = index;
        }
        next[index] = -1;
        rear[qn - 1] = index;
        arr[index] = data;
    }

    int dequeue(int qn)
    {
        // underflow
        if (front[qn - 1] == -1)
        {
            cout << "Queue UnderFlow " << endl;
            return -1;
        }

        // find index to pop
        int index = front[qn - 1];

        // front ko aage badhao
        front[qn - 1] = next[index];

        // freeSlots ko manage karo
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
};

int main()
{

    kQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(25, 1);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;

    cout << q.dequeue(1) << endl;

    return 0;
}