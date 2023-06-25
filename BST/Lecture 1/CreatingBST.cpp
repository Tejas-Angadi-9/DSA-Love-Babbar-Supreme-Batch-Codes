// Creation of BST
#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node *insertintoBST(Node *root, int data)
{
    if (root == NULL)
    {
        // This is the first node we have to create
        root = new Node(data);
        return root;
    }

    // If there is no first node -> Then decide whether to go left or right
    if (root->data > data)
    {
        // insert in left
        root->left = insertintoBST(root->left, data);
    }
    else
    {
        root->right = insertintoBST(root->right, data);
    }
    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        // cout<<"Enter the data after "<<data<<":"<<endl;
        root = insertintoBST(root, data);
        cin >> data; // Taking new data
    }
}

void preOrderTraversal(Node *root)
{
    // NLR
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node *root)
{
    // NLR
    if (root == NULL)
    {
        return;
    }

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node *root)
{
    // NLR
    if (root == NULL)
    {
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

// Assuming there are only unique values in tree
Node *findNodeInBST(Node *root, int target)
{
    // base case
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == target)
        return root;

    if (target > root->data)
    {
        // Search in right subtree
        return findNodeInBST(root->right, target);
    }
    else
    {
        return findNodeInBST(root->left, target);
    }
}

// Minimum
int minVal(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
        return -1;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->data;
}

// Maximum
int maxVal(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
        return -1;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}

// Deletion
Node *deleteNodeInBST(Node *root, int target){
    // bc
    if(root == NULL){
        return NULL;
    }

    if(root->data == target){
        // isi ko delete karna hai
        // 4 cases
        if(root->left == NULL && root->right == NULL){
            // leaf node
            delete root;
            return NULL;
        }
        else if(root->left == NULL && root->right != NULL){
            Node *child = root->right;
            delete root;
            return child;
        }
        else if(root->left != NULL && root->right == NULL){
            Node *child = root->left;
            delete root;
            return child;
        }
        else{
            // both child
            // find inorder predecessor in left subtree
            int inorderPre = maxVal(root->left);
            // replace root->data value with inorder predecessor
            root->data = inorderPre;
            // delete inorder predecessor from left subtree
            root->left = deleteNodeInBST(root->left, target);
            return root;
        }

    }
    else if(target > root->data){
        // go right
        root->right = deleteNodeInBST(root->right, target);
    }
    else if(target < root->data){
        // go left
        root->left = deleteNodeInBST(root->left, target);
    }
    return root;
}

void print(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
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

            if (temp->left) // If data is present in the left node of the current temp
            {
                q.push(temp->left);
            }
            if (temp->right) // If data is present in the right node of the current temp
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    Node *root = NULL;

    cout << "Enter the data for the node: " << endl;
    takeInput(root);
    cout << "Printing the tree" << endl;
    print(root);
    // cout << "Printing the Pre Order: ";
    // preOrderTraversal(root);
    // cout << endl;
    // cout << "Printing the In Order: ";
    // inOrderTraversal(root);
    // cout << endl;
    // cout << "Printing the Post Order: ";
    // postOrderTraversal(root);
    // cout << endl;

    // bool ans = findNodeInBST(root, 15);
    // cout << "present or not: " << ans << endl;

    // cout << "Max: " << maxVal(root) << endl;
    // cout << "Min: " << minVal(root) << endl;

    deleteNodeInBST(root, 100);
    cout<<endl;
    print(root);
}