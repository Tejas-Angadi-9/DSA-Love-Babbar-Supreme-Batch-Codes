#include<iostream>
#include<set>
using namespace std;
int main(){
     set<int>s;

     s.insert(5);
     s.insert(5);
     s.insert(9);
     s.insert(9);
     s.insert(9);
     s.insert(9);

     for(int i:s)
        cout<<i<<endl;

    cout<<"Size: "<<s.size()<<endl;

    //using iterator
    set<int> :: iterator it = s.begin();
    it++;

    s.erase(it); 

     for(auto i:s)
        cout<<i<<" ";

    cout<<"Size: "<<s.size()<<endl;

    cout<<"Is present or not "<<s.count(9)<<endl;

    //Using find operation
    set<int> :: iterator itr = s.find(9);
    cout<<"Value present at itr "<<*it<<endl;
}