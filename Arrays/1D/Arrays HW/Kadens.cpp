#include <bits/stdc++.h> // include standard library headers
using namespace std;

int kadane(int arr[], int n)
{
    int max_so_far = 0, max_ending_here = 0;
    for (int i = 0; i < n; i++)
    {
        max_ending_here += arr[i];
        if (max_ending_here < 0)
            max_ending_here = 0;
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}

int main()
{
    int arr[] = {1, 2, 7, -4, 3, 2, -10, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_sum = kadane(arr, n);
    cout << "Maximum subarray sum is " << max_sum;
    return 0;
}