#include <iostream>
using namespace std;

void update(int **p)
{
     p = p + 1;  //--> Doesn't change

    // *p2 = *p2 + 1;  --> Only changes p1
 
    // **p2 = **p2 + 1; --> Changes the value
}
int main()
{
    int i = 5;
    int *p1 = &i;
    int **p2 = &p1;

    // cout << *p2 << endl;
    // cout << p1 << endl;

    // cout << i << endl;
    // cout << *p1 << endl;
    // cout << **p2 << endl;

    // cout << &i << endl;
    // cout << p1 << endl;
    // cout << *p2 << endl;

    cout << endl
         << endl;
    cout << "Before: " << i << endl;
    cout << "Before: " << p1 << endl;
    cout << "Before: " << p2 << endl;

    update(p2);
    cout << "After: " << i << endl;
    cout << "After: " << p1 << endl;
    cout << "After: " << p2 << endl;
    cout << endl
         << endl;
}