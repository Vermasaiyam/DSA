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

int getLength(Node *tail)
{
    int cnt = 1;
    Node *temp = tail->next;

    while (temp != tail)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

pair<Node *, Node *> splitMiddle(Node *&tail)
{

    int len = getLength(tail);
    int intersection = len / 2;
    Node *tail1 = tail;
    Node *tail2 = tail;
    int cnt = 0;
    while (cnt < intersection)
    {
        tail2 = tail2->next;
        cnt++;
    }
    cnt = 0;
    Node *temp = tail;
    if (len & 1)
    {

        tail2 = tail2->next;
        while (cnt < intersection)
        {
            temp = temp->next;
            cnt++;
        }
        temp->next = tail1;

        temp = tail2;
        cnt = 0;

        while (cnt < intersection - 1)
        {
            temp = temp->next;
            cnt++;
        }
        temp->next = tail2;
    }
    else
    {

        while (cnt < intersection - 1)
        {
            temp = temp->next;
            cnt++;
        }
        temp->next = tail1;

        temp = tail2;
        cnt = 0;

        while (cnt < intersection - 1)
        {
            temp = temp->next;
            cnt++;
        }
        temp->next = tail2;
    }

    return make_pair(tail1, tail2);
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

    return 0;
}