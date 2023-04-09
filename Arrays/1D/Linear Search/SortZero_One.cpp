#include<iostream>
using namespace std;

//sorting function

void sort(int arr[], int n){
    //setting 2 pointer
    int i=0, j=n-1;
    //checking 
    while(i<j){
        //condition 1 //if 1 then move forwards
        while(arr[i] == 0 && i<j){
            i++;
        }
        //condition 2 //if 0 then move backwards
        while(arr[j] == 1 && i<j){
            j--;
        }
        if(arr[i] == 1 && arr[j] == 0 && i < j){
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
    }
}

//printing function

void toPrint(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]= {0,1,1,0,0,1};
    int n = 6;
    sort(arr, n);
    toPrint(arr, n);
}