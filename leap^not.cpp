#include<iostream>
using namespace std;

int main(){
    int year;
    cin>>year;

    int flag = ((year%400 == 0) || (year%4==0 && year%100!=0)) ? 1 : 0;

    if(flag == 1){
        cout<<"leap year";
    }
    else{
        cout<<"non leap year";
    }


    
    // if(year%400 == 0) 
    //     cout<<"leap year";

    // else if(year%4==0 && year % 100!=0){
    //     cout<<"leap year";
    // }    
    // else {
    //     cout<<"non leap year";
    // }
}