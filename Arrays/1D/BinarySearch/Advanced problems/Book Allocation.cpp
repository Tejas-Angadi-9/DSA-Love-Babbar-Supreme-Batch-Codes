#include<iostream>
using namespace std;
//IsPossible function
int isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageCount = 0;
    
    for(int i = 0; i<n; i++){
        if(pageCount + arr[i] <= mid){
            pageCount += arr[i];
        }else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageCount = arr[i];
        }
    }
    return true;
}
//BinarySearch
int binarySearch(int arr[], int n, int m){
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while( s<=e ){
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main(){
    int arr[] = {10,20,30,40,50};
    int n = 5;
    int m = 2;
    int finalAns = binarySearch(arr, n, m);
    cout<<"Minimum: "<<finalAns<<endl;
}