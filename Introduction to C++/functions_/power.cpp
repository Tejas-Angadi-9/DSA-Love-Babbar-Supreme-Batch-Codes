#include<iostream>
using namespace std;

    int power(){
        int a, b;
        cin >> a >> b;
        int ans = 1;
        for( int i = 1; i<=b; i++){
            ans = ans * a;
        }
        return ans;
    }

int main(){

    // int a,b;
    // cout<<"Enter the base and power: ";
    // cin>>a>>b;
    // int answer = power(a, b);
    // cout<<answer;
    int answer1 = power();
    cout<<"Answer is: "<<answer1;
    int answer2 = power();
    cout<<"Answer is: "<<answer2;
    int answer3 = power();
    cout<<"Answer is: "<<answer3;
}