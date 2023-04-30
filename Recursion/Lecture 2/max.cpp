// Find the max element in an array

#include <iostream>
#include <limits.h>
#include <bits/stdc++.h>
using namespace std;

void findMin(int arr[], int n, int i, int &mini)
{
    // bc
    if (i >= n)
    {
        return;
    }

    mini = min(mini, arr[i]);

    // rc
    findMin(arr, n, i + 1, mini);
}

void findMax(int arr[], int n, int i, int &maxi)
{
    // bc
    if (i >= n)
    {
        return;
    }

    if (arr[i] > maxi)
    {
        maxi = arr[i];
    }

    // rc
    findMax(arr, n, i + 1, maxi);
}

int main()
{
    int arr[] = {10, 80, 30, 50, 40};
    int n = 5;
    int i = 0;

    int maxi = INT_MIN;
    int mini = INT_MAX;

    findMax(arr, n, i, maxi);
    findMin(arr, n, i, mini);
    cout << "Maximum: " << maxi << endl;
    cout << "Minimum: " << mini << endl;
}