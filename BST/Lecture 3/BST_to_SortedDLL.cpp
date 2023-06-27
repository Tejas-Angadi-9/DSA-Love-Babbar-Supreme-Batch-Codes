// Creation of BST
#include <iostream>
#include <queue>
#include <limits.h>
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

class NodeData
{
public:
    int size;
    int minVal;
    int maxVal;
    bool ValidBST;

    NodeData(int size, int max, int min, bool valid)
    {
        this->size = size;
        minVal = min;
        maxVal = max;
        bool validBST;
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

void convertIntoSortedDLL(Node *root, Node *&head)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // convert right subtree into LL
    convertIntoSortedDLL(root->right, head);

    // attach root node
    root->right = head;

    if (head != NULL)
        head->left = root;

    // update head
    head = root;

    // convert left subtree into LL
    convertIntoSortedDLL(root->left, head);
}

Node *sortedLinkedListIntoBST(Node *&head, int n)
{
    // bc
    if (n <= 0 || head == NULL)
        return NULL;

    Node *leftSubTree = sortedLinkedListIntoBST(head, n - 1 - n / 2);

    Node *root = head;
    root->left = leftSubTree;

    head = head->right;

    // solve the right part
    root->right = sortedLinkedListIntoBST(head, n / 2);
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

void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->right;
    }
    cout << endl;
}

NodeData *findLargestBST(Node *root, int &ans)
{
    // bc
    if (root == NULL)
    {
        NodeData *temp = new NodeData(0, INT_MIN, INT_MAX, true);
    }
}

int main()
{
    int inorder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int s = 0;
    int e = 8;

    Node *root = bstUsingInorder(inorder, s, e);
    print(root);

    Node *head = NULL;
    convertIntoSortedDLL(root, head);

    cout << "Printing sorted Linked list" << endl;
    printLinkedList(head);
    cout << endl;
    sortedLinkedListIntoBST(head, 9);

    Node *root1 = NULL;
    root1 = sortedLinkedListIntoBST(head, 9);
    cout << "Printing the BST" << endl;
    print(root1);
}