/* This is the problem in which is used to find the first and last occurance of the given element
    in an array and also to find the number of occurances */

#include<iostream>
using namespace std;

//to perform Binary search
int leftMost(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int ans = -1;
    
    int mid = start + (end - start) / 2;
    
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        if(arr[mid] > key){
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
    mid = start + (end - start) / 2;
    }   
    return ans;
}
int rightMost(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int ans = -1;
    
    int mid = start + (end - start) / 2;
    
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        if(arr[mid] > key){
            end = mid - 1;
        }       
        else if(arr[mid] < key){
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 3, 5};
    int n = 6;
    int key = 3;
    int lm1 = leftMost(arr, n, key);
    int lm2 = rightMost(arr, n, key);
    cout << "\nLeft Most: " << lm1 <<endl;
    cout << "\nRight Most: " << lm2 <<endl;
    int occurance = lm2 - lm1 + 1;
    cout<<"\nNo. of occurance"<<key<<" is: "<<occurance<<"\n"<<endl;
}