#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int f =1;

    for(int i=1; i<=num; i++){
        f = f*i;
    }
    cout<<f;
}