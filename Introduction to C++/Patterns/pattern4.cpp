#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    // int count = 1;
    while (row <= n)
    {
        int col = row;
        // int val = row;
        while (col < 2*row)
        {
            cout << col << " ";
            // val++;
            col++;
        }
        cout << endl;
        row++;
    }
}

/*
    Pattern 4
    n = 4

    1
    2 3
    3 4 5
    4 5 6 7

*/