// searching the element in 2D matrix using binary search
#include <iostream>
using namespace std;

bool binarySearch(int arr[][3], int n, int m, int target)
{
    int s = 0, e = n * m - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int rowIndex = mid / m;
        int colIndex = mid % m;
        int element = arr[rowIndex][colIndex];
        if (element == target)
        {
            return true;
        }

        if (element > target)
        {
            // left
            e = mid - 1;
        }
        else
        {
            // right
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return false;
}

int main()
{
    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9},{10,11,12}};
    int n = 4, m = 3;
    int target = 4;
    bool flag = binarySearch(arr, n, m, target);
    if (flag)
        cout << "Element is present in the matrix";
    else
        cout << "Element is not present in the matrix";
}