// 2 stacks in 1 arr

#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    // functions
    void push1(int data)
    {
        if ((top2 - top1) == 1)
        {
            // space not available
            cout << "Overflow in stack 1" << endl;
        }
        else
        {
            // space available
            top1++;
            arr[top1] = data;
        }
    }

    void pop1()
    {
        if (top1 == 1)
        {
            // stack empty
            cout << "Underflow in stack 1" << endl;
        }
        else
        {
            // stack not empty
            arr[top1] = 0; // To make that element 0 where top2 ptr is pointing
            top1--;
        }
    }

    void push2(int data)
    {
        if ((top2 - top1) == 1)
        {
            // space not available
            cout << "Overflow in stack 2" << endl;
        }
        else
        {
            // space available
            top2--;
            arr[top2] = data;
        }
    }

    void pop2()
    {
        if (top2 == size)
        {
            // stack empty
            cout << "Underflow in stack 2" << endl;
        }
        else
        {
            // stack not empty
            arr[top2] = 0; // To make that element 0 where top2 ptr is pointing
            top2++;
        }
    }
    void print()
    {
        cout << endl;
        cout << "Top1: " << top1 << endl;
        cout << "Top2: " << top2 << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s(10);
    s.push1(10);
    s.print();
    s.push1(20);
    s.print();
    s.push1(30);
    s.print();
    s.push1(40);
    s.print();
    s.push1(50);
    s.print();

    s.push2(100);
    s.print();
    s.push2(110);
    s.print();
    s.push2(120);
    s.print();
    s.push2(130);
    s.print();
    s.push2(140);
    s.print();
    // s.push1(150);
    // s.print();
    // s.push2(200);
    // s.print();

    s.pop1();
    s.print();
    s.pop1();
    s.print();
    s.pop2();
    s.print();
    s.push2(1000);
    s.print();
}