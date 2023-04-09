#include<iostream>
using namespace std;

class car{
    public:
        string name;
        int weight;

    void speedUp(){
        cout<<"Speeding up"<<endl;
    }

    void speedDown(){
        cout<<"Applying brake"<<endl;
    }
};

class Scorpio: public car{  // it uses "is a  relationship" -> scorpio is a car

};
int main(){
    Scorpio s;
    s.speedDown();
}