// Reverse the linked list till k
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

int getLength(Node *&head)
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

Node *reverseKNodes(Node *&head, int k)
{
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
        return NULL;
    }

    int len = getLength(head);
    if (k > len)
    {
        // cout << "Enter valid value for k" << endl;
        return head;
    }

    // It means number of nodes in LL is >= k
    // step1: Reverse first K nodes of LL
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr -> next;

    int count = 0;
    while(count < k){
        // reversing
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    // step2: Recurive call
    if(forward != NULL){
        // we still have nodes left to reverse
        Node *recursionKaAns = reverseKNodes(forward, k);
        head -> next = recursionKaAns; //This is used to connect the whole LL after reversing
    }

    // step3: return head of the modified LL
    return prev; //This is the new head and we shouldn't update the acutal head
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

    cout<<endl;

    cout<<"Reversing k "<<endl;
    first = reverseKNodes(first, 2);
    print(first);
}