#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int flag = (n%2==0) ? 1 : 0;

    if(flag == 1) cout<<"prime num.";
    else cout<<"non prime num";

}