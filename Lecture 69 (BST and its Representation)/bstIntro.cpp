#include<iostream>
#include<queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

node* insertIntoBST(node* root, int d){
    // base case
    if (root == NULL){
        root = new node(d);
        return root;
    }

    if (d > root->data){
        root->right = insertIntoBST(root->right, d);
    }
    else{
        root->left = insertIntoBST(root->left, d);
    }

    return root;
}

void takeInput(node* &root){
    int data;
    cin >> data;
    while (data != -1){
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

node* minVal(node* root){
    node* temp = root;
    while (temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

node* maxVal(node* root){
    node* temp = root;
    while (temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

node* deleteFromBST(node* root, int x){
    if (root == NULL){
        return root;
    }

    if (root->data == x){
        // 0 child
        if (root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        // 1 child
        if (root->left == NULL && root->right != NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }
        if (root->left != NULL && root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }

        // 2 child
        if (root->left != NULL && root->right != NULL){
            int temp = minVal(root->right)->data;
            root->data = temp;
            root->right = deleteFromBST(root->right, temp);
            return root;
        }
    }
    else if (root->data > x){
        root->left = deleteFromBST(root->left, x);
    }
    else{
        root->right = deleteFromBST(root->right, x);
    }
    return root;
}

int main(){
    node* root = NULL;

    cout << "Enter data " << endl;
    takeInput(root);

    cout << "Printing data" << endl;
    levelOrderTraversal(root);
    cout << "Printing inorder" << endl;
    inorder(root);
    cout << endl << "Printing preorder" << endl;
    preorder(root);
    cout << endl << "Printing postorder" << endl;
    postorder(root);

    cout << endl << "Min Value ";
    cout << minVal(root)->data;

    cout << endl << "Max Value ";
    cout << maxVal(root)->data;

    // deletion
    root = deleteFromBST(root, 50);

    cout << "Printing data" << endl;
    levelOrderTraversal(root);
    cout << "Printing inorder" << endl;
    inorder(root);
    cout << endl << "Printing preorder" << endl;
    preorder(root);
    cout << endl << "Printing postorder" << endl;
    postorder(root);

    return 0;
}