// sorting 0, 1 and 2's using count method -> this is data replacement and if this is not allowed then this approach is not useful

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

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void sortZeroOneTwo(Node *&head)
{
    // step1: FInd count of zeros, ones and twos
    int zeros = 0, ones = 0, twos = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
            zeros++;
        else if (temp->data == 1)
            ones++;
        else
            twos++;

        temp = temp->next;
    }

    // step2: Fill 0, 1 and 2s in the original LL
    temp = head;
    while (temp != NULL)
    {
        // fill zeros
        while (zeros--)
        {
            temp->data = 0;
            temp = temp->next;
        }

        // fill ones
        while (ones--)
        {
            temp->data = 1;
            temp = temp->next;
        }
        // fill twos
        while (twos--)
        {
            temp->data = 2;
            temp = temp->next;
        }
    }
}

int main()
{
    Node *first = new Node(2);
    Node *second = new Node(1);
    Node *third = new Node(1);
    Node *fourth = new Node(0);
    Node *fifth = new Node(0);
    Node *sixth = new Node(2);
    Node *seventh = new Node(1);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    cout << "Input linked list" << endl;
    print(first);

    cout << "After sorting the linked list" << endl;
    sortZeroOneTwo(first);
    print(first);
}

// In most of the interviews data replacement is not allowed   