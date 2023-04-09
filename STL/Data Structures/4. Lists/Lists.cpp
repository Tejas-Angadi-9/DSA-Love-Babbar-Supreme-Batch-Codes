#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);

    cout<<"Before popping"<<endl;
    for(int ele: l){
        cout<<ele<<" ";
    }
    cout<<endl;
    // l.clear();
    cout<<"Is empty or not? "<<l.empty()<<endl;

}