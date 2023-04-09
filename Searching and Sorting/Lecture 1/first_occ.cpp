// find the first occurance of an element in sorted array
#include <iostream>
using namespace std;

int lastOcc(int arr[], int n, int target)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            s = mid + 1;
        }

        else if (target > arr[mid])
            e = mid - 1; 
        else if (target < arr[mid])
            s = mid + 1;

        mid = s + (e - s) / 2;
    }
    return ans;
}

int firstOcc(int arr[], int n, int target)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            e = mid - 1;
        }

        else if (target > arr[mid])
            s = mid + 1;
        else if (target < arr[mid])
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {1, 7, 7, 7, 7, 9};
    int target = 7;
    int n = sizeof(arr) / sizeof(arr[0]);
    int first = firstOcc(arr, n, target);
    cout << "First Occurance: " << first << endl;
    int last = lastOcc(arr, n, target);
    cout << "Last Occurance: " << last << endl;

    // to find the total number of occurances
    int totalOcc = last - first + 1;
    cout << "Total occurances: " << totalOcc << endl;
}