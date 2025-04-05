#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete this->next;
            this->next = NULL;
        }
        cout << "Memory freed for value " << value << endl;
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
        tail = temp;
        head = temp;
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtMid(Node *&tail, Node *&head, int position, int d)
{
    Node *newNode = new Node(d);

    // insert at head
    if (position == 1)
    {
        insertAtHead(tail, head, d);
        return;
    }
    int cnt = 1;
    Node *temp = head;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insert at end
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, d);
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    temp->next->prev = newNode;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    // delete starting node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next->prev = NULL;
        temp->next = NULL;

        delete temp;
    }
    else
    {
        // delete any other node
        Node *prev = NULL;
        Node *curr = head;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        // last node
        if (curr->next == NULL)
        {
            tail = prev;
        }
        if (curr->next != NULL)
        {
            curr->next->prev = prev; // This line is essential to maintain the integrity of the linked list.
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void traverse(Node *head)
{
    Node *temp = head;
    cout << endl;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(tail, head, 10);
    traverse(head);
    cout << "head = " << head->data << ", tail = " << tail->data << endl;

    insertAtHead(tail, head, 20);
    traverse(head);
    cout << "head = " << head->data << ", tail = " << tail->data << endl;

    insertAtTail(tail, head, 30);
    traverse(head);
    cout << "head = " << head->data << ", tail = " << tail->data << endl;

    insertAtTail(tail, head, 40);
    traverse(head);
    cout << "head = " << head->data << ", tail = " << tail->data << endl;

    insertAtMid(tail, head, 3, 50);
    traverse(head);
    cout << "head = " << head->data << ", tail = " << tail->data << endl;

    deleteNode(1, head, tail);
    traverse(head);
    cout << "head = " << head->data << ", tail = " << tail->data << endl;

    return 0;
}