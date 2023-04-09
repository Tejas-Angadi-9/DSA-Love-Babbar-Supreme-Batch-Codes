#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;

    q.push("Tejas");
    q.push("C");
    q.push("Angadi");

    int n = q.size();
    for(int i = 0; i<n; i++){
        cout<< "Top element: "<< q.front()<< endl;
        q.pop();
        cout<<"After popping"<<endl;
        cout<< "Empty or not: "<<q.empty()<<endl;
    }
}