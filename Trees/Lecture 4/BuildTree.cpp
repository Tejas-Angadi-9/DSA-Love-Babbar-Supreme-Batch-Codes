// Build tree from preOrder and inOrder vector which is given as input
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

int findPosition(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
            return i;
    }
    return -1;
}

// build tree from inorder and preorder traversal
Node *buildFromPreOrderIndOrder(int inorder[], int preorder[], int size, int &PreIndex, int inorderStart, int inorderEnd)
{
    // bc
    if (PreIndex >= size || inorderStart > inorderEnd)
    {
        return NULL;
    }

    // step A:
    int element = preorder[PreIndex++];
    // make this element as root
    Node *root = new Node(element);

    int pos = findPosition(inorder, size, element); // we find the postion of the element in the order

    // Step B: root->left solve
    root->left = buildFromPreOrderIndOrder(inorder, preorder, size, PreIndex, inorderStart, pos - 1);

    // Step C: root->right solve
    root->right = buildFromPreOrderIndOrder(inorder, preorder, size, PreIndex, pos + 1, inorderEnd);

    return root;
}

// PRINTING THE TREE -> FROM LECTURE 1
void levelOrderTraversal(Node *root)
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
    int inorder[] = {40, 20, 50, 10, 60, 30, 70};
    int preorder[] = {10, 20, 40, 50, 30, 60, 70};

    int size = 7;
    int preIndex = 0;
    int inorderStart = 0;
    int inorderEnd = size - 1;

    Node *root = buildFromPreOrderIndOrder(inorder, preorder, size, preIndex, inorderStart, inorderEnd);

    cout << "Printing the tree" << endl;
    levelOrderTraversal(root);
}