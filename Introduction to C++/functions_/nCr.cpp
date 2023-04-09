#include<iostream>
using namespace std;
int fact(int n){
    int factorial = 1;
    for(int i = 1; i<=n; i++){
        factorial *= i;
    }
    return factorial;
}

int ncr(int n, int r){
    int num = fact(n);
    int den = fact(r) * fact(n-r);
    int ans = num / den;
    return ans;
}
int main(){
    int n , r;
    cout<<"Enter the value for n: "<<endl;
    cin>>n;
    cout<<"Enter the value for r: "<<endl;
    cin>>r;
    int finalAns = ncr(n, r);
    cout<< finalAns<<endl;
}