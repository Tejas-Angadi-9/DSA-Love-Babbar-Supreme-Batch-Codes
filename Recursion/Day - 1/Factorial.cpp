#include <iostream>
using namespace std;
int factorial(int n)
{
    // cout<<n<<" ";   //       -> this is used to display when base class is absent
    // base case
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}
int main()
{
    cout<<"n: ";
    int n;
    cin >> n;

    if (n < 0)
    {
        cout << "Error" << endl;
    }
    else
    {
        int ans = factorial(n);
        cout << ans << endl;
    }
}