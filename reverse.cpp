#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(int n){
    if(n == 0)
    return;
   
        int rem = n%10;
        cout<<rem;

        reverse(n/10);
}
int main(){
    int n = 564;
    reverse(n);
    return 0;

}