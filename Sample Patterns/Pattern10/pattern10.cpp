#include<iostream>
using namespace std;

int main(){
    int start;
    for (int i=1;i<=5;i++){
        if(i%2==0){
            start = 0;
        }else {
            start = 1;
        }
        for (int j=0;j<i;j++){
            cout<< start;
            if(start == 1){
                start = 0;
            }else {
                start = 1;
            }
        }
        cout<<endl;
    }
}


1
01
101
0101
10101