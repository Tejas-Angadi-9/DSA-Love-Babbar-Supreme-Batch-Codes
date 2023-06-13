// Print the top of the given tree
#include <iostream>
#include <queue>
#include <map>
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

void printTopView(Node *root)
{
    if (root == NULL)
        return;

    // create a map where in reference to horizontal distance we store the values
    map<int, int> topNode;

    // Level Order
    // We will store a piar consisting of node and horizontal distance
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();

        Node *frontNode = temp.first;
        int hd = temp.second;

        // Check if the current horizontal distance (hd) is present or not. If exsits then ignore it
        if (topNode.find(hd) == topNode.end()) // value is not found and we have reached the end of the map
        {
            // Create a entry into the map
            topNode[hd] = frontNode->data;
        }

        if (frontNode->left)
            q.push(make_pair(frontNode->left, hd - 1));

        if (frontNode->right)
            q.push(make_pair(frontNode->left, hd + 1));
    }
    // the answer is present in the map
    cout << "Printing the ans: " << endl;
    for (auto i : topNode)
    {
        cout << i.second << " -> " << i.first << endl;
    }
}

void printRightView(Node *root, vector<int> &ans, int level)
{
    // bc
    if (root == NULL)
        return;

    if (level == ans.size())
    {
        ans.push_back(root->data);
    }

    printRightView(root->right, ans, level + 1);
    printRightView(root->left, ans, level + 1);
}

int main()
{
    int data;
    Node *root = new Node(data);
    cout << "Enter the root node: " << endl;
    cin >> data;

    root = buildTree(data);
    int level = 0;
    vector<int> ans;
    printRightView(root, ans, level);

    cout << "Printing the left view: " << endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
}