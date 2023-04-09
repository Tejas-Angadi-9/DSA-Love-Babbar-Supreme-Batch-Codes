#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string>s;
    s.push("Tejas");    
    s.push("C");
    s.push("Angadi");    

    int n = s.size();
    for(int i = 0; i<n; i++){
        cout<< "Top element: "<< s.top()<< endl;
        s.pop();
        cout<<"After popping"<<endl;
        cout<< "Empty or not: "<<s.empty()<<endl;
    }
}