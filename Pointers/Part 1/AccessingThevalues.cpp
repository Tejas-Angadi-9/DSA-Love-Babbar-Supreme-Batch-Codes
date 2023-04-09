#include <iostream>
using namespace std;
int main()
{
    // int num = 5;

    // cout << num << endl;

    // cout << "Address of num is: " << &num << endl;

    // int *ptr = &num;

    // cout << "Value is: " << *ptr << endl;

    int num = 5;
    int a = num;
    a++;
    cout << num << endl;
    cout << a << endl;

    int *p = &num;
    cout << "Before: " << num << endl;
    (*p)++;

    cout << "After: " << num << endl;
}