// inheritence

#include <iostream>
using namespace std;
class Animal{
    public:
        int age = 10;
        int weight;

        void eat(){
            cout<<"Eating"<<endl;
        }
};


//creating child class
class Dog:public Animal{

};
int main()
{
    Dog d1;
    cout<<d1.age<<endl;
    d1.eat();
}