#include <iostream>
using namespace std;

class Maths
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        return a + b + c;
    }
    double sum(int a, float b)
    {
        return a + b;
    }
};
int main()
{
    Maths m;
    cout << m.sum(10, 20) << endl;
    cout << m.sum(10, 20, 30) << endl;
 
}