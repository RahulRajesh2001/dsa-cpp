#include<iostream>
using namespace std;


int reverse(int n){
    int num=0;
    int last_digit;
    while(n>0){
        last_digit = n % 10;
        num=(num*10)+last_digit;
        n=(int)n/10;
    }
    cout<<num;
    return 0;
}

int main(){
    reverse(7608);
}

