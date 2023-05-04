#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Size of Q: " << q.size() << endl;
    cout << "Q's front before popping: " << q.front() << endl;
    q.pop();
    cout << "Q's front after popping: " << q.front() << endl;
    cout << q.back() << endl;

    while(!q.empty()){
        q.pop();
    }
    
    if (q.empty())
    {
        cout << "Q is empty" << endl;
    }
    else
    {
        cout << "Q is not empty" << endl;
    }
}