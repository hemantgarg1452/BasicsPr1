#include<iostream>
using namespace std;

int power(int base, int x){
    if(x == 0) return 1;

    return base*power(base, x-1);
}

int main(){
    int base, x;
    cin>>base>>x;
    int res = power(base, x);
    cout<<res;
}