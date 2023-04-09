#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;

    d.push_front(2);
    d.push_back(1);
    for(int ele: d){
        cout<<ele<<" ";
    }
    cout<<endl;

    // d.pop_back();
    // d.pop_front();
    
    cout<<"At ith position: "<< d.at(0)<<endl;
    cout<<"First element: "<<d.front()<<endl;
    cout<<"Last element: "<<d.back()<<endl;

    cout<<"Empty or not? "<<d.empty()<<endl;

    cout<<"After clearing ";

    d.erase(d.begin());
    // d.clear();
    for(int ele: d){
        cout<<ele<<" ";
    }
    cout<<endl;

}