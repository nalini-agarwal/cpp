#include<iostream>
using namespace std;
int main(){
    int a=0;
    while(a<10){
        cout<<"a"<<a;
        a++;
    }
    cout<<"-----------";
    int b=0;
    do{
        cout<<"b"<<b;
        b++;
    }
    while(b<10);
    cout<<"-----------";
    for(int i=0; i<10; i++){
        cout<<"i"<<i;
    }
    return 0;
}