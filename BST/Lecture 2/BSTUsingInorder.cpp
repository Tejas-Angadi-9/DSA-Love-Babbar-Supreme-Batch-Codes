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

Node *bstUsingInorder(int inorder[], int s, int e)
{
    // bc
    if (s > e)
        return NULL;

    int mid = (s + e) / 2;
    int element = inorder[mid];
    Node *root = new Node(element);

    root->left = bstUsingInorder(inorder, s, mid - 1);
    root->right = bstUsingInorder(inorder, mid + 1, e);

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
    // Node *root = NULL;

    // cout << "Enter the data for the node: " << endl;
    // takeInput(root);
    // cout << "Printing the tree" << endl;
    // print(root);

    int inorder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int s = 0;
    int e = 8;

    Node *root = bstUsingInorder(inorder, s, e);
    print(root);
}