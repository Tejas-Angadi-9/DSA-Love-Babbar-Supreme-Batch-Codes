#include<iostream>
#include<algorithm>
#include<vector>
//  #include<bits/stdc++.h>
 
using namespace std;

int main(){

    vector<int>v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 6 "<<binary_search(v.begin(), v.end(), 6)<<endl;

    //finding upper and lower bound
    cout<<"Upper bound "<<upper_bound(v.begin(), v.end(),6)-v.begin()<<endl;
    cout<<"Lower bound "<<lower_bound(v.begin(), v.end(),4)-v.begin()<<endl;

    //to find min and max
    int a = 10;
    int b= 20;
    cout<<"Minimum: "<<min(a,b)<<endl;
    cout<<"Maximum: "<<max(a,b)<<endl;

    //to swap
    swap(a,b);
    cout<<"After swapping "<<a <<" "<<b<<endl;

    //To reverse
    string abcd = "ABCD";
    reverse(abcd.begin(), abcd.end());
    cout<<"Reversing ABCD -> "<<abcd<<" "<<endl;
    

    //to rotate
    cout<<"Rotating: ";
    rotate(v.begin(), v.begin()+1 , v.end());
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //sort
    cout<<"sorting: ";
    sort(v.begin(), v.end());
    for(int i:v){
        cout<<i<<" ";
    }
}