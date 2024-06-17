#include<iostream>
using namespace std;
int main(){
    int count=0;
    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            count=count+1;
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}