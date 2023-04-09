//In this it is used to find the pair of sum

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int target = 5;
    int index = -1;
    int count = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                cout<<arr[i]<<" "<<arr[j]<<endl; 
                count++;
            }
        }
    }
    cout<<"Pair: "<<count<<endl;
    return index;
}