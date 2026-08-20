#include<iostream>
using namespace std;

int n;
int i;
int sum;

void printSum(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    printSum(i-1,sum+i);
}

int main(){
    cout<<"Enter N:";
    cin>>n;
    printSum(n,0);
}

//Print sum of n numbers