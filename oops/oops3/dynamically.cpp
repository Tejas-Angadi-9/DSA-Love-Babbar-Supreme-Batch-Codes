#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak()
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

int main()
{
    // Animal* a = new Animal();
    // a->speak();

    // Dog *d = new Dog();
    // d->speak();

    // upcasting -> can be accessed by "virtual" keyword
    //  Animal *a = new Dog();
    //  a->speak();
    // Animal *a = new Dog();
    // a->speak();

    // downcasting -> can be accessed by "virtual" keyword
    Dog *d = (Dog *)new Animal(); // explictly type casting as it is not supported by the compiler
    d->speak();
}