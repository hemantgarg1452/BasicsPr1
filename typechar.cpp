#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(ch>=65 && ch<=90) cout<<"uppercase";
    else if(ch>=97 && ch<=122) cout<<"lowercase";
    else if(ch>=48 && ch<=57) cout<<"digits";
    else{
        cout<<"symbols";
    }
    return 0;
}