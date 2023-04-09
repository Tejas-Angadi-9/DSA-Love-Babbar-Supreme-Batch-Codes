#include <iostream>
using namespace std;
int main()
{
    // int arr[11] = {2, 5, 6};

    // cout << "4th " << *arr<< endl;
    // cout << "5th " << *arr + 1 << endl;
    // cout << "6th " << *(arr + 1) << endl;
    // cout << "7th " << *(arr) + 1 << endl;

    int arr[10] = {23, 122, 41, 67};
    cout << *(arr + 2) << endl;

    int i = 3;
    cout << i[arr] << endl; 
}