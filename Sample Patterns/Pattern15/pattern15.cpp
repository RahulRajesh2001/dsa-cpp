#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for (int i=1;i<=n;i++){
        int alpha=65+n-i;
        for(int j=1;j<=i;j++){
            cout<<char(alpha) <<" ";
            alpha++;
        }
        cout<<endl;
    }
    
}

F 
E F 
D E F 
C D E F 
B C D E F 
A B C D E F 