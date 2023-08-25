#include<iostream>
using namespace std;

int main(){
    char ch = 107;

    if((ch>='A' && ch<='Z') ||(ch>='a' && ch<='z')){
        cout<<"Alphabet is valid";
    } else{
        cout<<"Not valid";
    }
}