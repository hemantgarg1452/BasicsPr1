#include<iostream>
using  namespace std;

int fact(int n){
    int f = 1;

    for(int i = 1; i<=n; i++)
        f = f*i;
    return f;
}

int strongis(int num){
    int sum = 0;
    int digit, temp = num;

    //calculate digit..
    while(temp!=0){
    digit = temp % 10;

    sum = sum+fact(digit); // sum = 1! + 2! + 3!
    temp/=10; 
    }
    
    return sum == num;

}

int main(){
    int n;
    cin>>n;

   if(strongis(n)) cout<<"strong";
   else cout<<"not strong";

    return 0;
}