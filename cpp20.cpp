#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter two numbers:"<<endl;
    cin>>n>>m;
    while(n!=m){
        if(n>m){
            n=n-m;
        }
        else if(m>n){
            m=m-n;
        }
    }
    cout<<"gcd is"<<m;
    return 0;
}