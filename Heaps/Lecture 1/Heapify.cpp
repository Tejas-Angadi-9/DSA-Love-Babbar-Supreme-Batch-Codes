#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int index = i;
    int largest = index;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (index != largest)
    {
        swap(arr[index], arr[largest]);
        index = largest;
        heapify(arr, n, index);
    }
    else
    {
        return;
    }
}

void buildHeap(int arr[], int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
}

// HEAP SORT
void heapSort(int arr[], int n)
{
    while (n != 1)
    {
        swap(arr[1], arr[n--]);

        // heapify
        heapify(arr, n, 1);
    }
}

int main()
{
    int arr[] = {-1, 12, 56, 43, 6, 78, 87, 5, 44, 3, 23, 32};
    int n = 11;
    // int i = 1;

    // buildHeap(arr, n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    heapSort(arr, n);
    for (int i = 1; i <= n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}