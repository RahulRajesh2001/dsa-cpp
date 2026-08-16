#include<iostream>
using namespace std;

int i;
int n;

void printName(int i,int n){
    if(i>n){
        return;
    }
cout<<"Rahul";
cout<<endl;
printName(i+1,n);
}

int main(){
cout<<"Enter N:";
cout<<endl;
cin>>n;
printName(1,n);
}

//print name N times