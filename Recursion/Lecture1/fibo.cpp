// Finding the fibbonacci number of nth value
#include <iostream>
using namespace std;

int fibbo(int n)
{
    if (n == 1)
    {
        return 0;
    }

    if (n == 2)
    {
        return 1;
    }

    int ans = fibbo(n - 1) + fibbo(n - 2);
    return ans;
}

int main()
{
    int n = 9;
    cout << "Fibbonacci of " << n << "th value is: " << fibbo(n) << endl;
}