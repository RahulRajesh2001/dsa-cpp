#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int alpha=64;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            alpha++;
            cout<<char(alpha)<<" ";
        }
        alpha=64;
        cout<<endl;
    }
}

A 
A B 
A B C 
A B C D 
A B C D E