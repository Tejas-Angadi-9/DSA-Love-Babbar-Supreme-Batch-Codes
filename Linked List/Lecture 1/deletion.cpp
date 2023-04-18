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

    // destructor
    ~Node()
    {
        // code here
        cout << "Node with value: " << this->data << " deleted" << endl;
    }
};

// findlength function
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

void deletion(int position, Node *&head, Node *&tail)
{

    if (head == NULL)
    {
        cout << "Cannot delete empty" << endl;
        return;
    }

    // deleting first node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next; // update
        temp->next = NULL;
        delete temp;
        return;
    }

    int len = findLength(head);
    // deleting last node
    if (position == len)
    {
        // step1: find prev
        int i = 1;
        Node *prev = head;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }
        // step2: prev ke next ko null bano do
        prev->next = NULL;
        // step3: Create a temp = tail
        Node *temp = tail;
        // step4: tail = prev
        tail = prev;
        // step5: delete temp
        delete temp;
        return;
    }
    if (position >= len)
    {
        cout << "Entered position is invalid.\nSo cannot be deleted" << endl;
    }
    // deleting middle node
    //  step1: find prev & curr
    int i = 1;
    Node *prev = head;
    while (i < position - 1)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;

    //  step2:
    prev->next = curr->next;
    //  step3:
    curr->next = NULL;
    //  step4:
    delete curr;
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
    // insertAtPos(head, tail, 101, 2);
    print(head);
    cout << endl;
    deletion(0, head, tail);
    print(head);
}