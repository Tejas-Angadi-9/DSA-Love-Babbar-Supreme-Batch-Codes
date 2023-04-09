#include<iostream>
using namespace std;
int additionFun(int arr[], int n){
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout << "Enter the size of the array: "<<endl;
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: " << endl;
        for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int add = additionFun(arr, n);
    cout << "Sum of all the elements: "<< add  <<endl;
}