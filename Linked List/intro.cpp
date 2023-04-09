// Linked list a type of DS in which data is stored in non-contagious manner and there is no wastage of memeory. It grows/ shrinks dynamically

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

void print(Node *&head)
{
    Node *temp = head; // here temp is a pointer where adderess is stored but not the value
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next; // The pointer is moved forward
    }
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    cout << "Printing the LL" << endl;
    print(first);
}