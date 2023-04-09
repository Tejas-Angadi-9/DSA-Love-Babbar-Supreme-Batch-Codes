#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int *p = &num;

    // copying of pointer
    int *q = p;
    cout << p << "-" << q << endl;
    cout << *p << "-" << *q << endl;

    // important concept
    int i = 3;
    int *t = &i;

    cout << ++(*t) << endl;
    *t = *t + 1;

    cout << *t << endl;
    cout << "Before t " << t << endl;
    t = t + 1;
    cout << "After t " << t << endl;
}