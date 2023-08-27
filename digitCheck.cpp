#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    int digit = 0;

    while(num!=0){
        num = num/10;
        digit++;
    }
    cout<<"no. of digits are "<<digit;
    return 0;
}