#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
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
        cout << "Deleted value = " << value << endl;
    }
};

void insertAtHead(Node *&tail, Node *&head, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{
    Node *temp = new Node(d);
    if (tail == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

void print(Node *head)
{
    if (head == NULL)
    {
        cout << "EMPTY" << endl;
        return;
    }
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *reverse(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *previous = NULL;
    Node *current = head;
    Node *forward = NULL;

    while (current != NULL)
    {
        forward = current->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(tail, head, 10);
    insertAtHead(tail, head, 20);
    insertAtTail(tail, head, 30);
    insertAtTail(tail, head, 40);

    print(head);

    return 0;
}