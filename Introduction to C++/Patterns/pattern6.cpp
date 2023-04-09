#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col<=n){ 
//We perform typecasting and save it in ch because directly printing it will print its value as it is in int
            char ch = 'A' +  col - 1; 
            cout<< ch;
            col++;
        }
        cout<<endl;
        row++;
    }
}

/*
    PATTERN 6
    n = 5

    A A A A A
    B B B B B
    C C C C C
    D D D D D
    E E E E E

    main logic: 
    1. We typecast the int value to char
    2. formula -> 'A' + row - 1    //if only 'A' + 1 -->  B B B B prints


    //If 'A' + col - 1
    ABCDE
    ABCDE
    ABCDE
    ABCDE
    ABCDE
*/