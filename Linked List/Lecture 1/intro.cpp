#include <iostream>
using namespace std;

// creating a node
class Node
{
public:
    int data;   // data present in the node
    Node *next; // pointer pointing to the next node

    // creating a default constructor
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    // creating a parameterized constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// creating a print function
void print(Node *first)
{
    // Node *temp = first;
    while (first != NULL)
    {
        cout << first->data<< " ";
        first = first->next;
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

    cout << "Printing the linked list" << endl;
    print(first);
}