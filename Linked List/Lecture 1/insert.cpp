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

void insertAtHead(Node *&head, int data)
{
    // step 1 -> creating a new node
    Node *newNode = new Node(data);

    // step 2 -> pointing the next node
    newNode->next = head;
    // step 3 -> Moving the head pointer to the start i.e on the new Node
    head = newNode;
}

void insertAtTail(Node *&tail, int data){
    Node *newNode = new Node(data);
    tail -> next = newNode;
    tail = newNode;
}

void printHead(Node *&head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void printTail(Node *&tail){
    Node *temp = tail;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    // Node *head = new Node(10); -> If one node is present
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 50);
    insertAtHead(head, 100);

    cout<<"Printing the head"<<endl;
    printHead(head);

}