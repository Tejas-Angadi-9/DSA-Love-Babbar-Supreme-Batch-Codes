#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *reverseUsingLoop(Node *&prev, Node *&curr)
{

    while (curr != NULL)
    {
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

Node *reverse(Node *&prev, Node *&curr)
{
    // bc
    if (curr == NULL)
    {
        // LL is reverse
        return prev;
    }

    // normal case
    // 1 case solve then recursion will take care
    Node *forward = curr -> next;
    curr->next = prev;

    reverse(curr, forward);
}

int main()
{
    Node *head = new Node(40);

    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    print(head);
    cout << endl;

    Node *prev = NULL;
    Node *curr = head;
    // head = reverse(prev, curr);
    cout << endl;
    cout<<"Printing Reverse Linked List"<<endl;
    head = reverseUsingLoop(prev, curr);
    print(head);
}
