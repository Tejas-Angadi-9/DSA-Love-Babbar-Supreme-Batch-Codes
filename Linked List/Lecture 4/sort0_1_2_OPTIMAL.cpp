// sorting 0, 1 and 2 (OPTIMAL APPROACH)

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

Node *sort2(Node *&head)
{
    // creating the dummy node
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;

    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;

    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    // Traverse the original LL
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == 0)
        {
            // to put this in zeroHead LL which is created by us
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // Append the zero node in zeroHead LL
            zeroTail->next = temp;
            zeroTail = temp;
        }
        else if (curr->data == 1)
        {

            // to put this in zeroHead LL which is created by us
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // Append the zero node in zeroHead LL
            oneTail->next = temp;
            oneTail = temp;
        }
        else
        {

            // to put this in zeroHead LL which is created by us
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // Append the zero node in zeroHead LL
            twoTail->next = temp;
            twoTail = temp;
        }
    }

    // we have all the 3 LL ready

    // Now we need to join them

    // remove the dummy nodes

    // return the head of the modified LL
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