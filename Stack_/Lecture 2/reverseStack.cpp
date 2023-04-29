// Reverse the given stack
#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int target)
{
    // bc
    if (s.empty())
    {
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();
    // rec
    insertAtBottom(s, target);
    // BT
    s.push(topElement);
}

void reverseStack(stack<int> &s)
{
    // bc
    if (s.empty())
    {
        return;
    }

    int target = s.top();
    s.pop();

    // reverse the stack
    reverseStack(s);
    // insert At bottom target ko
    insertAtBottom(s, target);
}

void print(stack<int> s)
{
    if (s.empty())
    {
        cout << "Stack is empty" << endl;
        return;
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout << "Before reversing" << endl;
    print(s);
    cout << endl;
    reverseStack(s);
    cout << "After reversing" << endl;
    print(s);
}