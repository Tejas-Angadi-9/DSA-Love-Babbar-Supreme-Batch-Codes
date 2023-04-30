// Minimum values to get the target with infinite supply of coins from the array

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int solve(vector<int> &arr, int target)
{
    // bc
    if (target == 0)
    {
        return 0;
    }

    if (target < 0)
    {
        return INT_MAX; // infinite
    }

    // 1 case
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = solve(arr, target - arr[i]);
        if (ans != INT_MAX)
        {
            mini = min(mini, ans + 1); // here we use ans + 1 as ans is just for getting the value of target - arr[i]. So, we need to add 1 for ans to get the value to reach the particular target
        }
    }

    return mini;
}

int main()
{
    vector<int> arr{1, 2};
    int target = 5;

    int ans = solve(arr, target);
    cout << "Answer is: " << ans << endl;
}