#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int data)
{
    // check for empty linked list
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    // check for empty linked list
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {

        Node *newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}
// findlenght function
int findLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

// Code here
void insertAtPos(Node *&head, Node *&tail, int data, int position)
{
    // when pos = 0 then i = 0 is equal to head so call head()
    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return; // so that we don't create a newNode
    }

    // at last pos
    int len = findLength(head);
    if (position >= len)
    {
        insertAtTail(head, tail, data);
        return;
    }
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step1: find the position: prev & curr
    int i = 1;
    Node *prev = head;
    while (i < position)
    {
        // moving the prev
        prev = prev->next;
        i++;
    }
    // curr nikal lo
    Node *curr = prev->next;

    // step2: Create a node
    Node *newNode = new Node(data);

    // step3:
    newNode->next = curr;

    // step4:
    prev->next = newNode;
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 90);
    insertAtTail(head, tail, 77);
    cout << "Normal Part" << endl;
    print(head);
    cout << endl;
    cout << endl;
    cout << "Inserting at a particular postion" << endl;
    insertAtPos(head, tail, 101, 2);
    print(head);
    cout << endl;
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    cout << endl;
    cout << "Inserting at head postion" << endl;
    insertAtPos(head, tail, 101, 0);
    print(head);
    cout << endl;
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    cout << endl;
    cout << "Inserting at tail postion" << endl;
    insertAtPos(head, tail, 101, 10);
    print(head);
    cout << endl;
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    // cout<<"length: "<<len->data<<endl;
}