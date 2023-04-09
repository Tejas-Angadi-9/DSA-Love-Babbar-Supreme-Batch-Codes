#include<iostream>
#include<array>

using namespace std;
int main(){
    int basic[3] = {1,2,3};     //Basic initialization of array

    array<int, 10> a = {1,2,3,4};    //Creating using STL 

    cout<<"Size: "<<a.size()<<endl;     // a.size() is a method which is used to find the size of the array

    for(int i = 0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //we can also find using a.at(index)
    cout<<"Value at: "<<a.at(1)<<endl;

    cout<<"Empty or not: "<<a.empty()<<endl;

    cout<<"front: "<<a.front()<<endl;
    cout<<"back: " <<a.back()<<endl;


}