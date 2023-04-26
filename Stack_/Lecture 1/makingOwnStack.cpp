// Making stack without stack stl using array
#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr; // arr pointer
    int top;  // Top index
    int size; // Total size of array

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1; // 0 means a valid element is present as indexing starts from 0. So, we start form -1
    }

    // Functions
    void push(int data)
    {
        if (size - top > 1)
        {
            // space available
            // insert
            top++;
            arr[top] = data;
        }
        else
        {
            // space not available
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            // stack is empty
            cout << "Stack underflow, cnat delete element" << endl;
        }
        else
        {
            // stack is not empty
            top--;
        }
    }

    int getTop()
    {
        if (top == -1)
        {
            // stack is empty
            cout << "There is no element in stack" << endl;
        }
        else
        {
            // present
            return arr[top];
        }
    }

    int getSize()
    {
        if (top == -1)
        {
            return 0;
        }
        else
        {

            return top + 1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack s(10); // s(size)
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while (!s.isEmpty())
    {
        cout << s.getTop() << " ";
        s.pop();
    }
    cout << endl;

    cout << "Size of stack: " << s.getSize() << endl;
}