// Print all the digits from the given numbers
#include <iostream>
using namespace std;

void solve(int n)
{
    // bc
    if (n == 0)
    {
        return;
    }

    int ans = n % 10;
    n /= 10;

    // rc
    solve(n);
    cout << ans << " ";
}

int main()
{
    int n = 647000;
    solve(n);
}