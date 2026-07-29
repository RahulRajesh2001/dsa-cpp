#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=5;i++){
        for(int j=0;j<5-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

* * * * * *
* * * *
* * *
* *
*

totoal rows =5

inner loop =

5 = 5-1+1
4 = 5-2+1
3 = 5-3+1
etc