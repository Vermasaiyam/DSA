#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        
        // constructor
        Node (int data){
            this->data = data;
            this->next = NULL;
        }
        
        //destructor
        ~Node(){
            int value = this->data;
            // memory free 
            if (this->next != NULL){
                delete next;
                this->next = NULL;
            }
            cout << "Memory is freed for value " << value << endl;
        }
};

// take head as reference variable to make changes it in only
void insertAtHead (Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

//without using tail pointer

// void insertAtTail(Node* &head, int d){
//     Node* newNode = new Node(d);
    
//     if (head == NULL){
//         head = newNode;
//         return;
//     }
    
//     Node* temp = head;
//     while (temp->next != NULL){
//         temp = temp->next;
//     }
    
//     temp->next = newNode;
// }

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    //insert at start
    if (position == 1){
        insertAtHead(head, d);
        return;
    }
    
    
    Node* temp = head;
    int cnt = 1;
    while (cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    
    // insert at tail
    if (temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }
    
    Node *newNode = new Node(d);
    
    newNode->next = temp->next;
    temp->next = newNode;
    
    
}

void print(Node* &head){
    Node* temp = head;
    
    while (temp!= NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(int position, Node* &head, Node* &tail){
    // delete the 1st Node
    if (position == 1){
        Node* temp = head;
        head = head->next;
        
        // memory freed
        temp->next = NULL;
        delete temp;
    }
    else{
        // deleting any other Node
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        
        while (cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        
        if (curr->next == NULL){
            tail = prev;
        }
        
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    // create a head pointer
    Node* head = NULL;
    Node* tail = NULL;
    
    // create an Object
    Node *node1 = new Node(10);
    head = node1;
    tail = node1;
    print(head);
    
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    
    
    // insertAtHead(head, 12);
    // print(head);
    
    // insertAtHead(head, 20);
    // print(head);
    
    insertAtTail(tail, 20);
    print(head);
    
    insertAtTail(tail, 30);
    print(head);
    
    insertAtPosition(tail, head, 3, 40);
    print(head);
    insertAtPosition(tail, head, 5, 90);
    print(head);
    
    deleteNode(5,head, tail);
    print(head);
    cout << head->data << " - " << tail->data << endl;

    return 0;
}