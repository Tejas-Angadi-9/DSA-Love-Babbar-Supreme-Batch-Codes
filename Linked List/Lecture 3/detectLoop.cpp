// To detect whether the LL has a loop or not. If yes, then print true and print the starting node of the loop and then remove the loop.
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

bool checkForLoop(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return false;
    }

    Node *slow = head;
    Node *fast = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
        // check whether slow and fast ptr meet at the same node i.e. at the same node address then return loop is present
        if (slow == fast)
        {
            return true;
        }
    }
    // Loop is not present after coming out of the loop
    return false;
}

Node *checkForStartingNode(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
        if (slow == fast)
        {
            // move the slow ptr to the head. We proved it from the A + B = K * C Expression
            slow = head;
            break; // This helps in comming out of the while loop after setting the slow ptr to the head
        }
    }

    // Now use while loop and move slow and fast ptr by 1
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    // After comming out of the for loop and by moving both the slow & fast ptr we return the starting node
    return slow;
}

Node *removeLoop(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
        if (slow == fast)
        {
            // move the slow ptr to the head. We proved it from the A + B = K * C Expression
            slow = head;
            break;
        }
    }

    Node *prev = fast;
    while (slow != fast)
    {
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }
    prev->next = NULL;
    return slow;
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    Node *seventh = new Node(70);
    Node *eighth = new Node(80);
    Node *ninth = new Node(90);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    // ninth->next = NULL;
    ninth->next = fifth;

    bool ans = checkForLoop(first);

    if (ans == 1)
        cout << "Loop is present in the linked list" << endl;
    else
        cout << "Loop is not present in the linked list" << endl;

    Node *startingNode = checkForStartingNode(first);
    cout << startingNode->data << endl;

    removeLoop(first);
    ans = checkForLoop(first);

    if (ans == 1)
        cout << "Loop is present in the linked list" << endl;
    else
        cout << "Loop is not present in the linked list" << endl;
}