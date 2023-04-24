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

Node *getMiddle(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return head;
    }

    if (head->next == NULL)
    {
        // only 1 node is LL
        return head;
    }

    // LL have more than 1 node 
    Node *slow = head;
    Node *fast = head -> next;

    while (fast != NULL)
    {
        fast = fast->next; // moving fast only by 1 for this time & we do this as we don't know whether the next node is present or not
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
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
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    print(first);
    cout << endl;
    cout << "Middle node is " << getMiddle(first)->data << endl;
}