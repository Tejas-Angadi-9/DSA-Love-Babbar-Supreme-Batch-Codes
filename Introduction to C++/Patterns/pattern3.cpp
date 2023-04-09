#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    int count = 1;
    while(row <= n){
        int col = 1;
        while(col <= row){
            cout<<count<<" ";
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
}

/*
        Pattern 3
        n = 4

        1
        2 3
        4 5 6
        7 8 9 10

*/