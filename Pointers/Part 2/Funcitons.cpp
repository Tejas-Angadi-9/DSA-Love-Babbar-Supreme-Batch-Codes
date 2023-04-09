#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}

void update(int *p)
{
    p = p + 1;
    cout << "Updating the addressing: " << p << endl;
}
int main()
{
    int value = 5;
    int *p = &value;

    // print(p);

    cout << "Before: " << *p << endl;
    update(p);
    cout << "After: " << *p << endl;
}