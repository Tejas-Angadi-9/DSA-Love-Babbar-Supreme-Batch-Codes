#include <iostream>
using namespace std;
int main()
{
    // int temp[10] = {1, 2};
    // cout << sizeof(temp) << endl;
    // cout << sizeof(*temp) << endl;
    // cout << sizeof(&temp) << endl;

    // int *ptr = &temp[0];
    // cout << sizeof(ptr) << endl;
    // cout << sizeof(*ptr) << endl;
    // cout << sizeof(&ptr) << endl;

    int arr[10];

    // ERROR
    //  arr = arr + 1;

    int *p = &arr[0];
    cout << p << endl;
    p = p + 1;
    cout << p << endl;
}