// Check whether the given complete binary tree (CBT) is a max-heap or not

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
        left = 0;
        right = 0;
    }
};

pair<bool, int> solve(Node *root)
{
    // bc-1
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, INT_MIN);
        return p;
    }
    // bc-2
    if (root->left == NULL && root->right == NULL)
    {
        // leaf node
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }

    pair<bool, int> leftAns = solve(root->left);
    pair<bool, int> rightAns = solve(root->right);

    if (leftAns.first == true && rightAns.first == true && root->data > leftAns.second && root->data < rightAns.second)
    {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }
    else
    {
        pair<bool, int> p = make_pair(false, root->data);
        return p;
    }
}

int main()
{

}