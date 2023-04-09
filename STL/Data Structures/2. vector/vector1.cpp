#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    vector<int>a(5,1);      //When we know the size and the same element to be added to all the spaces in a vector
    
    //copying vector v in a
    vector<int> vamos(a);
    cout<<"After copying: ";
    for(int e:vamos){
        cout<<e<<" ";
    }

    cout<<endl;
    cout<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl;

    cout<<"First element: "<<v.front()<<endl;
    cout<<"Last element: "<<v.back()<<endl;
    
    cout<<"Before pop: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();

    cout<<"After pop: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
}