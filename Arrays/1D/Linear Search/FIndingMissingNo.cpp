#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void duplicate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i)
            cout << "Missing number: " << i << endl;
    }
}

int main()
{
    int arr[] = {0, 1,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n); // Sorting value
    duplicate(arr, n);
}