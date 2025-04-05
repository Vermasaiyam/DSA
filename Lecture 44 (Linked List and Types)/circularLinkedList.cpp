#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory freed for value " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{

    Node *temp = new Node(d);

    if (tail == NULL)
    {
        tail = temp;
        temp->next = temp;
    }
    else
    {
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *&tail)
{
    Node *temp = tail;

    if (tail == NULL)
    {
        cout << "Empty List" << endl;
    }

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);

    cout << endl;
}

void deleteNode(Node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "Empty list" << endl;
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = tail->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // 1 node condition
        if (prev == curr)
        {
            tail = NULL;
        }

        // last node deletion
        else if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

bool isCircularList(Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    else
    {
        Node *temp = head->next;

        while (temp != NULL && temp != head)
        {
            temp = temp->next;
        }

        if (temp == head)
        {
            return true;
        }
        return false;
    }
}

int main()
{
    Node *tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

    deleteNode(tail, 5);
    print(tail);

    if (isCircularList(tail))
    {
        cout << " Linked List is Circular in nature" << endl;
    }
    else
    {
        cout << "Linked List is not Circular " << endl;
    }

    return 0;
}