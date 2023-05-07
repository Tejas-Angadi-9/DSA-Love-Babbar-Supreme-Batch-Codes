// Creating a circular queue without using stl commands
#include <iostream>
using namespace std;

class CirQueue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    CirQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
        // Q full
        // first element case
        // cicular nature
        // normal flow

        if (front == 0 && rear == size - 1)
        {
            cout << "Q is full" << endl;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear];
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
    {
        // empty check
        // single element ka check
        // maintain the circular nature
        // normal flow

        if (front == -1)
        {
            cout << "Q is empty" << endl;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = rear = -1;
        }
        else if(front == size - 1){
            front = 0;
        }
        else{
            front++;
        }
    }
};

int main()
{
}
