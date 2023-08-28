#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1 = 1;
    int n2 = 3;
    int sum;

    for(int i = n1; i<=n2; i++){
        sum = sum + i;
    }
    cout<<sum;
    return 0;
}


//Answer will be 6

/*
2nd Method 
    int sum = y*(y+1)/2 - x*(x+1)/2 + x;
    cout << sum;
*/

/*
recursive method
int calcSum(int a, int b){
    if(a>b)
    return 0;

    return a + calcSum(a+1,b);

}

int main(){
    int a = 6; 
    int b = 9;

    int sum = calcSum(a,b);
    cout<<sum;
    
}

Answer is: 30
*/