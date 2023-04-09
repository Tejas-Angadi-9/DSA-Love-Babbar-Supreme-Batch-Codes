#include<iostream>
using namespace std;
 
//multiple level inheritence -> ex. cross breading of animals
class A{
    public:
        // int physics = 100;
        int chemistry;
        A(){
            chemistry = 101;
        }
};

class B{
    public:
    int chemistry;
    B(){
        chemistry = 401;
    }
};

class C: public A, public B{
    public:
    int maths = 87;
};
int main(){
    C obj;
    cout<<obj.A::chemistry<<" "<<obj.B::chemistry<<" "<<obj.maths<<endl;
}