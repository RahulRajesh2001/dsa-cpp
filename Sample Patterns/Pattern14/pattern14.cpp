#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        //spaces
        for(int s=1;s<=n-i;s++){
            cout<<"  ";
        }
        //starts
        int alpha=64;
        int breakpoint = (2*i-1)/2 +1;
        for(int j=1;j<=2*i-1;j++){
            if(j>breakpoint){
                alpha--;
            }else{
                alpha++;
            }
        cout<<char(alpha)<<" ";
        }
        cout<<endl;
    }
}

        A 
      A B A 
    A B C B A 
  A B C D C B A 
A B C D E D C B A 