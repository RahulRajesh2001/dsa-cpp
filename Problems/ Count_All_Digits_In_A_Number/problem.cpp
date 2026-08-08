#include<iostream>
using namespace std;

int count(){
    int number;
    int counter=0;
    cout<<"Enter a number :";
    cout<<endl;
    cin>>number;
    
    while(number>0){
        counter=counter+1;
        number=number/10;
    }
    cout<<"The digit count is: "<<counter;
    return 0;
}

int main(){
   count(); 
}


