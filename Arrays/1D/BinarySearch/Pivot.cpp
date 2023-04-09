#include<iostream>
using namespace std;
int getPivot(int arr[], int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;

    while(s < e){
        if(arr[mid] >= arr[mid+1]){

            s = mid + 1;        //This is used to select right part
        
        }
        else{

            e = mid;            //This is used to select left part
        
        }

        mid = s + (e-s)/2;
    }

    return s;
}

int main(){
    int arr[5] = {7,9,1,2,3};
    cout<<"Pivot index is: "<<getPivot(arr, 5)<<endl;
}