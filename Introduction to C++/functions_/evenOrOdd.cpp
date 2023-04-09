#include <iostream>
using namespace std;

bool check()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    //Checking if the n is even or odd
    if(n % 2 == 0)
        return true;
    else    return false;
}

int main()
{
    bool val = check();
    cout << "Given number is:"<<val<<endl;
}