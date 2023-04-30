#include <iostream>
using namespace std;

bool check(int arr[], int n, int i)
{
    // bc
    if (i == n - 1) // If only one element then it's already on the last element
    {
        return true;
    }

    // 1st case
    if (arr[i + 1] < arr[i])
    {
        return false;
    }

    // recursion
    check(arr, n, i + 1);
}

int main()
{
    int arr[] = {10, 2500, 350, 400, 500};
    int n = 5;
    int i = 0;

    bool flag = check(arr, n, i);
    if (flag)
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";
}