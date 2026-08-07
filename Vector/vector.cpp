#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>elements={10,20,30};

    for(vector<int>::iterator tim=elements.begin();tim!=elements.end();++tim){
        cout<<*tim;
        cout<<endl;
    }

    for(auto tim=elements.begin();tim!=elements.end();++tim){
        cout<<*tim;
        cout<<endl;
    }
}