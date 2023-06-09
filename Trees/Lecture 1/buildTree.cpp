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

Node *buildTree(int data)
{

    Node *root = new Node(data);
    // base case
    if (data == -1)
    {
        return NULL;
    }

    int leftData;
    cout << "Enter the left data of: " << data << " node" << endl;
    cin >> leftData;
    // rc
    root->left = buildTree(leftData);

    int rightData;
    cout << "Enter the right data of: " << data << " node" << endl;
    cin >> rightData;
    // rc
    root->right = buildTree(rightData);

    return root;
}

void inOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    // LNR
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    // NLR
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    // LRN
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
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

    int data;
    Node *root = new Node(data);
    cout << "Enter the root node: " << endl;
    cin >> data;

    root = buildTree(data);
    // print(root);
    inOrderTraversal(root);
    preOrderTraversal(root);
    postOrderTraversal(root);
}