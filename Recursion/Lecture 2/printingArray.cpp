// Print the array using recursion
#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    // bc -> when array size = 0 then return
    if (n == 0)
    {
        return;
    }

    cout << *arr << " ";
    // rc
    // printArray(arr + 1, n - 1);
    printArray(++arr, --n); //here only pre-increment works as we know there are 2 types when we do post-increment

}

int main()
{
    int i = 0;
    int n = 5;
    int arr[5] = {10, 20, 30, 40, 50};

    printArray(arr, n);
}