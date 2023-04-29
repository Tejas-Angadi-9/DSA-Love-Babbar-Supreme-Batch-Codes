#include <iostream>
using namespace std;

void counting(int n)
{
    // bc
    if (n == 0)
    {
        // cout << n << " ";
        return;
    }
    cout << n << endl;
    counting(n - 1);
}

int main()
{
    int n = 15;
    counting(n);
}