/*
Q1. WE have an array and we need to find the min and max value within that array

input -->   [4, 12, 8, 10]      output --> min = 4  max = 12
*/
#include<iostream>
using namespace std;
//To find min
int findMin(int arr[], int n){
    int min = arr[0];
    for(int i = 0; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}
int findMax(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}


int main(){
    int arr[] = {4, 5, 8, 10};
    int n = 4;
    int minimum = findMin(arr, n);
    int maximum = findMax(arr, n);

    cout<<"Minimum: "<<minimum<<endl;
    cout<<"Maximum: "<<maximum<<endl;
}