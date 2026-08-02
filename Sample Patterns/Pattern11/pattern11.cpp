#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int space= n+2;
    for (int i=1;i<=n;i++){
        
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        //spaces
        for(int j=1;j<=space;j++){
            cout<<" ";
        }

        //numbers
        for(int j=i;j>=1;j--){
            cout<<j;
        }

        cout<<endl;
        space-=2;

    }
}

1      1
12    21
123  321
12344321