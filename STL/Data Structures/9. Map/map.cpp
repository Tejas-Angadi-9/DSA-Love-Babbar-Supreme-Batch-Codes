#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> m;

    //storing the values into the map
    m[1] = "Tejas";
    m[12] = "C";
    m[3] = "Angadi";

    m.insert({5, "James"});

    cout<<"Before erasing 12"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Find whether 12 is present or not "<<m.count(12)<<endl;

    cout<<"After erasing 12"<<endl;
    // m.erase(12);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //Using find operation to find the iterator
    auto it = m.find(5);
    for(auto i = it; i != m.end(); i++){
        cout<<"Iterator: "<<(*i).first<<endl;
    }
}