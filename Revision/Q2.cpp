/* 
Q2.Reverse the given array

Input -> [2, 7, 8, 5, 9]       Output -> [9, 5, 8, 7, 2]
*/

#include<iostream>
using namespace std;
//To Reverse
void toReverse(int arr[], int n){
    int i = 0, j = n-1;
    while(i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

//To print()
void toPrint(int arr[], int n){
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {2, 7, 8, 5, 9};
    int n = 5;
    toReverse(arr, n);
    toPrint(arr, n);
}