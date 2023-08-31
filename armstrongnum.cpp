#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int order(int x){
    int len = 0;
    while(x){
        len++;
        x = x/10;
    }
    return len;
}

bool armstrong(int num, int len){
    int sum=0, digit;

    int temp = num;

    while(temp!=0){
        
        digit = temp%10;
        sum = sum + pow(digit, len);
        temp /= 10;
    }

    return num == sum;
}

int main(){
    int n;
    cin>>n;

    int len = order(n);

    if(armstrong(n, len)){
        cout<<"valid armstrong";
    } else {
        cout<<"non armstrong";
    }
    
    return 0;
}
