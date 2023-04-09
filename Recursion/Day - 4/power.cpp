#include <iostream>
using namespace std;
int power(int a, int b)
{
    // bc
    if (b == 0)
        return 1;

    if (b == 1)  // a power is 1 then ans is a
        return a;

    // rc
    int ans = power(a, b / 2);

    // if b is even
    if (b % 2 == 0)
        return ans * ans;
    else // if b is odd
        return a * ans * ans;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = power(a, b);

    cout << "Answer is: " << ans << endl;
}