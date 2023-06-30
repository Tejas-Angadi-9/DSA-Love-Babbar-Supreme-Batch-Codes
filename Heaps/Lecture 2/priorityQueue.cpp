#include <iostream>
#include <queue>
using namespace std;
void maxHeap()
{
    priority_queue<int> pq;

    pq.push(3);
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);

    cout<<"Printing max heap"<<endl;
    while (!pq.empty())
    {
        cout << "Top element: " << pq.top() << endl;
        pq.pop();
    }
}

void minHeap()
{
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(3);
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);

    cout<<"Printing min heap"<<endl;
    while (!pq.empty())
    {
        cout << "Top element: " << pq.top() << endl;
        pq.pop();
    }
}
int main()
{
    // max heap
    maxHeap();

    // min heap
    minHeap();
}
