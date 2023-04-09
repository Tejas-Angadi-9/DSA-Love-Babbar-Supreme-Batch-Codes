#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
    // function overriding
public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};

// main function
int main()
{
    Animal a;
    Dog d;
    a.speak();
    d.speak();
}