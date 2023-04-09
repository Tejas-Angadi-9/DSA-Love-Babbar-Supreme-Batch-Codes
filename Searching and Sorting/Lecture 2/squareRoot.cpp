// to find the square root of the number using binary Search
#include <iostream>
using namespace std;
int squareRoot(int n)
{
    int s = 0, e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s < e)
    {
        if (mid * mid <= n)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (mid * mid > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n = 25;
    int val = squareRoot(n);
    cout << "square root: " << val << endl;
}
