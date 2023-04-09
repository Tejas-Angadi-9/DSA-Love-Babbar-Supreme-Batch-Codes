#include <iostream>
using namespace std;
bool search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return true;
    }
    return false;
}
int main()
{
    int n = 5;
    int key = 11;
    int arr[n] = {1, 2, 7, 9, 11};
    bool found = search(arr, n, key);
    if (found == true)
    {
        cout << key << " is present " << endl;
    }
    else
    {
        cout << key << " is not present" << endl;
    }
}