#include <iostream>
using namespace std;

class Animal
{
    // state and properties
private:
    int weight;

public:
    int age = 10;
    int size;
    string name;

    // default constructor
    Animal()
    {
        this->weight = 0;
        this->age = 0;
        this->name = "";
        cout << "Constructor called" << endl;
    }

    // parameterized constructor
    Animal(int age)
    {
        this->age = age;
        cout << "Parameterized constructor called" << endl;
    }

    // copy constructor
    Animal(Animal &obj)
    {
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout << "I'm inside copy constructor";
    }

    // destructor
    ~Animal()
    {
        cout << "I'm inside destructor" << endl;
    }

    // behaviour
    void eat()
    {
        cout << "Eating" << endl;
    }

    void sleep()
    {
        cout << "Sleeping" << endl;
    }

    // setters
    void setWeight(int weight)
    {
        this->weight = weight;
    }

    // getters
    int getWeight()
    {
        return weight;
    }
};

int main()
{
    // creating an object
    // ways to define an object
    // 1. static and 2. Dynamic

    // static
    // Animal ramesh;
    // ramesh.age = 12;
    // ramesh.name = "Lion";
    // cout << "Age of ramesh is: " << ramesh.age << endl;
    // cout << "name of ramesh is: " << ramesh.name << endl;

    // // calling the functions
    // ramesh.eat();
    // ramesh.sleep();

    // // cout<<ramesh.weight<<endl;  // -> we can't access the private properties so to access we should getters and setters;
    // ramesh.setWeight(101);
    // cout << "weight: " << ramesh.getWeight() << endl;

    // dynamic memory
    // Animal *suresh = new Animal;
    // (*suresh).age = 15; // by this way we are pointing to the value present in the address of the suresh
    // (*suresh).name = "Billi";

    // // alternate way
    // suresh->age = 17;
    // suresh->name = "Kutta";

    // suresh->eat();
    // suresh->sleep();

    // Constructor is called by default
    Animal a;
    // Animal *b = new Animal();
    Animal *b = new Animal(10);

    // copying a object
    Animal c = a;
    // Animal d(b);

    // destructor ->
    //  static -> destructors automatically while
    // dynamic -> needs to be handled manually using the delete keyword
    Animal *e = new Animal();
    delete e;
}