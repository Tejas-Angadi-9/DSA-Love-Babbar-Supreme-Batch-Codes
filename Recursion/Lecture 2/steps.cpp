// Possible ways to reach nth stair and only possiblity is to climb 1 to 2 stairs

#include <iostream>
using namespace std;

int possibleWays(int n)
{
    // cout << n << endl;
    // bc
    if (n == 0)
    {
        return 1;
    }

    if (n < 0)
    {
        return 0;
    }

    // rc
    return possibleWays(n - 1) + possibleWays(n - 2);
}

int main()
{
    int n = 4;
    // cout << n / 2 + 1 << endl;
    cout << possibleWays(n) << endl;
}