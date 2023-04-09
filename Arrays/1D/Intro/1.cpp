#include<iostream>
using namespace std;
void printArray(int a[], int n){
    for(int i = 0; i < n; i++){
        cout<<a[i]<<endl;
    }
}
int main(){
    int n = 10;
    //Initializing the array
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    printArray(a, n);
}