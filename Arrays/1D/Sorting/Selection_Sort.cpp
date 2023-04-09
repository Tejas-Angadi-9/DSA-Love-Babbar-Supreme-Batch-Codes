#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[minIndex] > arr[j])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

void toPrint(int arr[], int n){
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n =5;
    selectionSort(arr, n);
    toPrint(arr, n);
}