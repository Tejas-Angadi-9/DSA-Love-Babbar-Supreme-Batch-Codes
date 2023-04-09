#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int a = 0, b = n - 1;
    for (int i = 0; i < n; i++)
    {
        while (a <= b)
        {
            swap(arr[a], arr[b]);
            a++ , b--;
        }
    }
}
void toPrint(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}

int main()
{
    int n = 4;
    int arr[n] = {2, 7, 5, 9};
    reverse(arr, n);
    toPrint(arr, n);
}