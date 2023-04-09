#include<iostream>
using namespace std;
//Print
void toPrint(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

//adding last number
void addLastNo(int arr[], int n){
    arr[n-1] += 1;
        for(int i = n; i>=0; i--){
            if(arr[i-1] == 10){
                int newArray[n];
                arr[i-1] = arr[i-1] % 10; 
                // arr[i] = arr[i-1] / 10;
        } 
    }
}

int main(){
    int arr[]= {9, 9, 9};
    int n = 3;
    addLastNo(arr, n);
    toPrint(arr, n);
}