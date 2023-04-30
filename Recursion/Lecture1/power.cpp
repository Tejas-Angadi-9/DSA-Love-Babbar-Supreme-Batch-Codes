// Print

#include <iostream>
using namespace std;

int power(int n)
{
    // bc
    if (n == 0)
    {
        return 1;
    }

    int ans = 2 * power(n - 1);
    return ans;
}

int main()
{
    int n = 4;
    cout << power(n);
}