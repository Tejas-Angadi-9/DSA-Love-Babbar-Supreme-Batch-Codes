// Create a tree from scratch
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

    // base case
    if (data == -1)
    { // when it reaches NULL -> -1 data
        return NULL;
    }

    // 1 case
    Node *root = new Node(data);

    // rest part will be completed by recursion
    int leftData;
    cout << "Enter data for left child of " << data << endl;
    cin >> leftData;
    root->left = buildTree(leftData);

    int rightData;
    cout << "Enter data for right child of " << data << endl;
    cin >> rightData;
    root->right = buildTree(rightData);
}

// level order traversal for printing
void levelOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    // intitially
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if(!q.empty()){
                // This is inserted as child node is already inserted by the parent node and Q is not empty
                q.push(NULL);
            }
        }
        else
        {

            cout << temp->data << " ";

            // inserting left-child
            if (temp->left)
            {
                q.push(temp->left);
            }
            // inserting right-child
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    Node *root;
    int data;
    cout << "Enter data for root node: " << endl;
    cin >> data;

    root = buildTree(data);
    levelOrderTraversal(root);
}