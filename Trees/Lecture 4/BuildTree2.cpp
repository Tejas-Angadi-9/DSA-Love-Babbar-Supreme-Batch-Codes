// Build tree from postOrder and inOrder vector which is given as input
#include <iostream>
#include <queue>
#include <map>
#include <unordered_map>

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
Node *buildFromPostOrderIndOrder(int inorder[], int postorder[], int &postIndex, int size, int inorderStart, int inorderEnd, unordered_map<int, int> &mapping)
{
    // bc
    if (postIndex < 0 || inorderStart > inorderEnd)
    {
        return NULL;
    }

    // Step A: create root node
    int element = postorder[postIndex];
    postIndex--;
    Node *root = new Node(element);

    // find the position
    // int pos = findPosition(inorder, size, element);

    // finding position using the map
    int pos = mapping[element];

    // root->right solve
    root->right = buildFromPostOrderIndOrder(inorder, postorder, postIndex, size, pos + 1, inorderEnd, mapping);

    // root->left solve
    root->left = buildFromPostOrderIndOrder(inorder, postorder, postIndex, size, inorderStart, pos - 1, mapping);

    return root;
}

void createMapping(unordered_map<int, int> &mapping, int inorder[], int n)
{
    for (int i = 0; i < n; i++)
    {
        mapping[inorder[i]] = i;
    }
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
    int inorder[] = {40, 20, 10, 50, 30, 60};
    int postorder[] = {40, 20, 50, 60, 30, 10};

    int size = 6;
    int postIndex = size - 1;
    int inorderStart = 0;
    int inorderEnd = size - 1;

    unordered_map<int, int> mapping;

    createMapping(mapping, inorder, size);

    Node *root = buildFromPostOrderIndOrder(inorder, postorder, postIndex, size, inorderStart, inorderEnd, mapping);

    cout << "Printing the tree" << endl;
    levelOrderTraversal(root);
}