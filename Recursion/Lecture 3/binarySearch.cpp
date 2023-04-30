// Binary search using recursion
#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int key)
{
    int mid = s + (e - s) / 2;

    // bc-1
    if (s > e)
    {
        return -1;
    }
    //bc-2 
    if (arr[mid] == key)
    {
        return mid;
    }

    // rc
    if (arr[mid] > key)
    {
        return binarySearch(arr, 0, mid - 1, key);
    }
    else
    {
        return binarySearch(arr, mid + 1, e, key);
    }
}

int main()
{
    int arr[] = {10, 30, 20, 40, 50};
    int n = 5;
    int s = 0;
    int e = n - 1;
    int key = 20;

    int ans = binarySearch(arr, s, e, key);
    cout << ans;
}