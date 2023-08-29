#include<iostream>
using namespace std;

int fib(int m){
    static int t1 = 0, t2 = 1, nextterm;
    if(m>0){
        nextterm = t1+t2;
        t1 = t2;
        t2 = nextterm;

        cout<<nextterm<<",";
        fib(m-1);
    }
}

int main(){
    int m;
    cin>>m;

    fib(m-2);
    return 0;
}

/*

int fab(int n){
    int a = 0;
    int b = 1;
    int fb;
    if(n<=1)
        return n;
    return fab(n-1) + fab(n-2);
}

int main(){
    int n;
    for(int i=0; i<n; i++){
        cout<fab(i)<<",";
    }
    return 0;
}

*/