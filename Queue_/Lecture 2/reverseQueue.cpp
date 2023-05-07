// reverse the queue using recursion

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseUsingRecursion(queue<int> &q)
{
    // bc
    if (q.empty())
    {
        return;
    }

    // processing -> 1 case only
    int ele = q.front();
    q.pop();

    // recursive call
    reverseUsingRecursion(q);

    // push the elements to the queue
    q.push(ele);
}

void reverseUsingLoop(queue<int> &q)
{
    stack<int> s;
    while (!q.empty())
    {
        int ele = q.front();
        q.pop();
        s.push(ele);
    }

    while (!s.empty())
    {
        int ele = s.top();
        s.pop();
        q.push(ele);
    }
}

void print(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // reverseUsingRecursion(q);
    reverseUsingLoop(q);
    print(q);
}