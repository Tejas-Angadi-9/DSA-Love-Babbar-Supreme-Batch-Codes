#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &s, int target)
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
    solve(s, target);
    // BT
    s.push(topElement);
}

void insertAtBottom(stack<int> &s)
{
    if (s.empty())
    {
        cout << "Stack is empty, can't insert at the bottom" << endl;
        return;
    }

    int target = s.top();
    s.pop();

    solve(s, target);
}

void print(stack<int> s)
{

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> s;
    s.push(11);
    s.push(32);
    s.push(27);
    s.push(15);
    s.push(5);

    cout << "Stack before inserting" << endl;
    print(s);
    cout << "After inserting the top element at the bottom" << endl;
    insertAtBottom(s);
    print(s);
}