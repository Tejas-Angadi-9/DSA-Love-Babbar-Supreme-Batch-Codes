#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int data){

    //step 1: Create a newNode
    Node *newNode = new Node(data);
    newNode -> next = head;
    //firstNode

    if(head == NULL){
        //LL -> empty list, first node ab add hogi
        tail = newNode;
    }
    head = newNode;    
}

void insertAtTail(Node *&head, Node *&tail, int data){
    Node *newNode = new Node(data);

    if(tail == NULL){
        //LL is empty
        tail = newNode;
        head = newNode;
    }
    else{
        //LL is non empty
        tail -> next = newNode;
    }
    if(head == NULL){
        head = newNode;
    }
    tail = newNode;
}

void print(Node *&head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
} 

int main(){
    // Node *head = new Node(10); 
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head,tail, 30);
    insertAtHead(head,tail, 40);
    insertAtTail(head,tail, 10);

    print(head);
}