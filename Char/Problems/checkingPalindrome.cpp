#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char toLower(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp; 
    }
}

char toUpper(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        return ch;
    }else{
        char temp = ch - 'a' + 'A';
        return temp; 
    }
}

bool isPalidrome(char pali[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        if(toLower(pali[s]) != toLower(pali[e]))
            return false;
        else{
            s++;
            e--;
        }
    }
    return true;
}
int main(){
    char pali[20] = "101";
    cout<<"Palindrome or not: "<<isPalidrome(pali, 3)<<endl;
    // cout<<"To lower Case: "<<toLower('A')<<endl;
    // cout<<"To upper Case: "<<toUpper('a')<<endl;
}