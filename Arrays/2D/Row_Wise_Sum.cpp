#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// to print row wise sum
void printSum(int arr[][3], int row, int col)
{
    cout << "Printing Sum -> " << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << endl;
    }
    cout << endl;
}

int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = 1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    return rowIndex;
}
int main()
{
    int arr[3][3];

    // Taking the input
    cout << "Enter the elements: " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    printSum(arr, 3, 3);
    int ans = largestRowSum(arr, 3, 3);
    cout << "Maximum row index is: " << ans << endl;
}