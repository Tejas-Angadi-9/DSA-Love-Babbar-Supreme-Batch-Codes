#include <iostream>
using namespace std;

class fruit
{
public:
    string name = "Mango";
};
class Mango : public fruit
{
public:
    int weight = 50;
};
class langada : public Mango
{
    public:
        int sugarLevel = 50;
};
int main()
{
    langada l;
    cout<<l.name<<" "<<l.weight<<" "<<l.sugarLevel<<endl;
}