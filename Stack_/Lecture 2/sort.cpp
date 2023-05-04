// Sort the stack in ascending order
#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int> &s, int target)
{
    // bc
    // if no element is present then add directly
    if (s.empty())
    {
        s.push(target);
        return;
    }

    if (s.top() >= target)
    {
        s.push(target);
        return;
    }

    // normal case for 1st case
    int topElement = s.top();
    s.pop();
    insertSorted(s, target);

    // BT
    s.push(topElement);
}

void sortStack(stack<int> &s)
{
    // bc
    if (s.empty())
    {
        return;
    }

    int target = s.top();
    s.pop();

    // rc
    sortStack(s);

    insertSorted(s, target);
}

void print(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}

int main()
{
    stack<int> s;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);

    print(s);
    cout << endl;
    sortStack(s);
    print(s);
}