#include <iostream>
using namespace std;
long long int sqRoot(int n)
{
    long long int start = 0;
    long long int end = n;
    long long int mid = start + (end - start) / 2;

    long long int ans = 0;
    while (start <= end)
    {

        long long int sq = mid * mid;

        if (sq == n)
        {
            return mid;
        }
        if (sq < mid)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
// we use DOUBLE as the value increases when we square the value
double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int tempSol = sqRoot(n);
    cout << "Square root of " << n << " is: " << morePrecision(n, 3, tempSol) << endl;
}