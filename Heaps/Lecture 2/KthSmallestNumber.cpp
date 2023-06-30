// Find the kth smallest element from the given array

#include <iostream>
#include <queue>
using namespace std;

int getKthSmallestElement(int arr[], int n, int k)
{
    priority_queue<int> pq; // we don't use heapify as we use the priority queue stl command

    // Pushing for first k values into the heap
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

    // for remaining elements
    for (int i = k; i < n; i++)
    {
        int element = arr[i];
        if (element < pq.top())
        {
            pq.pop();
            pq.push(element);
        }
    }

    int ans = pq.top();
    return ans;
}

int getKthBiggestElement(int arr[], int n, int k)
{
    // creating a min heap
    priority_queue<int, vector<int>, greater<int>> pq;

    // Pushing for first k values into the heap
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

    // for remaining elements
    for (int i = k; i < n; i++)
    {
        int element = arr[i];
        if (element > pq.top())
        {
            pq.pop();
            pq.push(element);
        }
    }

    int ans = pq.top();
    return ans;
}

int main()
{
    int arr[] = {3, 11, 6, 9, 4, 12, 2, 8};
    int n = 8;
    int k = 5;

    int smallest = getKthSmallestElement(arr, n, k);
    cout << "smallest kth element: " << smallest << endl;

    int largest = getKthBiggestElement(arr, n, k);
    cout << "largest kth element: " << largest << endl;
}