#include<iostream>
using namespace std;

int n;
int i;

void printNByBacktracking(int i,int n){
    if(i<1){
        return;
    }
    printNByBacktracking(i-1,n);
    cout<<i<<endl;
}

int main(){
cout<<"Enter N :";
cin>>n;
printNByBacktracking(n,n);
}

//print 1 to N using backtracking travel.