// We have check whether the given LL is a palindrome or not. if yes then print Yes. If not, then print false
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

Node *reverse(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

bool isPalindrome(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return true;
    }

    if (head->next == NULL)
    {
        return true;
    }

    // if LL > 1
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }

    // slow ptr is pointing in the middle node

    Node *reverseLLKaHead = reverse(slow->next);
    // join the left and the right nodes after reversing the right LL
    slow->next = reverseLLKaHead;

    // Start comparison
    Node *temp1 = head;
    Node *temp2 = reverseLLKaHead;

    while (temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            return false;
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(30);
    Node *fifth = new Node(20);
    Node *sixth = new Node(10);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    bool ans = isPalindrome(first);

    if (ans)
    {
        cout << "It is a Palindrome" << endl;
    }
    else
    {
        cout << "It is not a palindrome" << endl;
    }
}