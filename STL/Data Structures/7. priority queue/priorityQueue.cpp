#include<iostream>
#include<queue>

using namespace std;
int main(){
    priority_queue<int> maxi;

    priority_queue<int,vector<int>, greater<int>>mini;
  //priority_queue<type, vector<int>, comparison Type>min_heap      <-- SYNTAX for creating min heap  
  cout<<"MAXIMUM"<<endl;
  maxi.push(1);
  maxi.push(2);
  maxi.push(3);
  maxi.push(4);

  int n = maxi.size();
  for(int i = 0; i<n; i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
  }
  cout<<endl;

  //Minimum 
  cout<<"MINIMUM"<<endl;
  mini.push(1);
  mini.push(2);
  mini.push(3);
  mini.push(4);

  int m = mini.size();
  for(int i = 0; i<m; i++){
    cout<<mini.top()<<" ";
    mini.pop();
  }
  cout<<endl;
  cout<<"Empty or not? "<< mini.empty()<<endl;
}