// creation of deque using class without using stl

#include <iostream>
using namespace std;

class Deque
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void pushRear(int data)
    {
        if (front == 0 && rear == size - 1)
        {
            cout << "Q is full" << endl;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (rear = size - 1 && front != 0)
        { // circular part
            rear = 0;
        }
        else
        { // Normal part
            rear++;
        }
        arr[rear] = data;
    }

    void pushFront(int data){
        if (front == 0 && rear == size - 1)
        {
            cout << "Q is full" << endl;
            return;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (rear = size - 1 && front != 0)
        { // circular part
            rear = 0;
        }
        else
        { // Normal part
            rear++;
        }
        arr[rear] = data;        
    }
};

int main()
{
}