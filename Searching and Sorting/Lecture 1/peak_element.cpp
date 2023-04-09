// Find the peak element in a mountain array
#include <iostream>
using namespace std;

int peak(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return arr[e];
}

int main()
{
    int arr[] = {0, 1, 10, 14, 15, 7, 5};
    int n = 7;
    cout << "Peak Element: " << peak(arr, n);
}