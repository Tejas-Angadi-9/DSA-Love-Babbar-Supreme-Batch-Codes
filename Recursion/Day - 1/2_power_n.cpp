#include <iostream>
using namespace std;
int power(int n)
{
    //base class
    if (n == 0)
        return 1;

    //recursive relation
    return 2 * power(n - 1);
}

int main()
{
    int n = 10;
    cout << power(n);
}