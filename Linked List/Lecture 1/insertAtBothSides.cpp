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

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 50);
    print(head);
}