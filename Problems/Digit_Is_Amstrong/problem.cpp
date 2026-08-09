#include<iostream>
#include<cmath>
using namespace std;

int amstrong(){
    int n;
    cin>>n;
    int last_digit;
    int amstrong=0;
    int dupn=n;

    while(n>0){
        last_digit=n%10;
        n=(int)n/10;
        amstrong=amstrong+pow(last_digit,3);
    }

    if(amstrong==dupn){
        cout<<"amstrong";
    }else{
        cout<<"not amstrong";
    }
    
    return 0;
}

int main(){
    amstrong();
}