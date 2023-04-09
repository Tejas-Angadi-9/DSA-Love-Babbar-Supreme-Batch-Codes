#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){ //at least we need to give to no of colums while declaring an array
    for(int row = 0; row<3; row++){
        for (int  col = 0; col < 4; col++){
            if(arr[row][col] == target)
                return 1;
        }
        
    }
    return 0;
}

int main(){
    int target;
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<"Enter the element to be found: "<<endl;
    cin>>target;
    if(isPresent(arr, target, 3, 4)){
        cout<< "Element "<< target <<" found"<<endl;
    }else{
        cout<< "Element "<< target <<" not found"<<endl;

    }
}