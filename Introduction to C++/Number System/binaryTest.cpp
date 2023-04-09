#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float ans = 0;
    int i = 0;

    while(n != 0){
        int bit = n & 1;    //This checks for the last bit number
                                                /*If = 1 then --> ODD 
                                                or = 0 then --> EVEN */
        ans = ans + (bit * pow(10, i));
        n = n >> 1;            //This divides the value of n by 2 
        i++;
    }
    cout << ans <<endl;
}