// Inserting a value into a heap
#include <iostream>
using namespace std;

class Heap
{
public:
    int arr[100];
    int size;

    Heap()
    {
        size = 0; // we gave the default size of heap as 0
    }

    void insert(int value)
    {
        // Insert at index
        size = size + 1;
        int index = size;
        arr[index] = value; // we append the new value at the end of the array

        while (index > 1)
        {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex])
            {
                swap(arr[parentIndex], arr[index]);
                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }

    int Delete()
    {
        int ans = arr[1];
        // repalce the last node with the top root node
        arr[1] = arr[size]; // 1 b'coz the indexing starts from 1
        size--;

        // Place the root node data in the correct position
        int index = 1;
        while (index < size)
        {
            int left = 2 * index;
            int right = 2 * index + 1;

            int largest = index;

            if (left < size && arr[largest] < arr[left])
            {
                largest = left;
            }

            if (right < size && arr[largest] < arr[right])
            {
                largest = right;
            }

            if (largest == index)
            {
                break;
            }
            else
            {
                swap(arr[index], arr[largest]);
                index = largest;
            }
        }
        return ans;
    }
};

int main()
{

    Heap h;
    h.arr[0] = -1;
    h.arr[1] = 100;
    h.arr[2] = 50;
    h.arr[3] = 60;
    h.arr[4] = 40;
    h.arr[5] = 45;
    h.arr[6] = 53;
    h.arr[7] = 58;
    h.arr[8] = 20;
    h.arr[9] = 30;


    h.size = 10;

    cout << "Printing the heap" << endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;

    // h.insert(110);

    // cout << "Printing the heap" << endl;
    // for (int i = 0; i <= h.size; i++)
    // {
    //     cout << h.arr[i] << " ";
    // }
    // cout << endl;

    h.Delete();
    cout << "Printing after deleting the root node" << endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;
}
