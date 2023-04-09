#include <iostream>
using namespace std;
void count(int n)
{
    //Base class
    if (n == 0)
    {
        return;
    }

    //Recursive relation
    cout << n << endl;
    count(n - 1);
}
int main()
{
    int n = 5;

    count(n);
}