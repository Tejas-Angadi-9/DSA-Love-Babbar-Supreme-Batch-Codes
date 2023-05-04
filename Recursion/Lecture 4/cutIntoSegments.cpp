#include <iostream>
using namespace std;

int solve(int n, int x, int y, int z)
{
    // bc
    if (n == 0)
    {
        return 0;
    }

    int a = 0;
    if (n - x >= 0)
    {
        a = solve(n - x, x, y, z) + 1;
    }
    int b = 0;
    if (n - y >= 0)
    {
        b = solve(n - y, x, y, z) + 1;
    }
    int c = 0;
    if (n - z >= 0)
    {
        c = solve(n - z, x, y, z) + 1;
    }
}

int main()
{
    int n = 7;
    int x = 5;
    int y = 2;
    int z = 2;

    int ans = solve(n, x, y, z);
}