// remove the duplicates from the Linked list and print the Linked list
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

void removeDuplicates(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }

    if (head->next == NULL)
    {
        cout << "Single Node is LL" << endl;
        return;
    }

    Node *curr = head;

    while (curr != NULL)
    {
        // we know that the curr is not NULL but we are not sure whether the next node to curr is != NULL. So, we handle it by using (curr -> next != NULL)
        if ((curr->next != NULL) && (curr->data == curr->next->data))
        {
            // equal
            curr->next = curr->next->next;
        }
        else
        {
            // Not equal
            curr = curr->next;
        }
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
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(2);
    Node *fourth = new Node(2);
    Node *fifth = new Node(2);
    Node *sixth = new Node(3);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    cout << "Before removing the duplicates" << endl;
    print(first);
    cout << endl;
    cout << "After removing the duplicates" << endl;
    removeDuplicates(first);
    print(first);
}