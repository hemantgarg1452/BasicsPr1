#include<iostream>
using namespace std;

bool isvowel(int c){
    c = toupper(c);
    cout<<c<<endl;
    return (c =='A' || c =='E' || c =='I' || c =='O' || c =='U');

}
int main(){
    char c;
    cin>>c;

    if(!isalpha(c)) 
    cout<<"Not Valid";

    else if(isvowel(c))
    cout<<"vowel";

    else 
    cout<<"constatnt";

    return 0;

}