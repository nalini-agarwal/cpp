#include<iostream>
using namespace std;
int main(){
    int n, i, sum=0,m;
    cout<<"enter n"<<endl;
    cin>>n;
    m=n;
    while(n>0){
        i=n%10;
        n=n/10;
        sum = sum+i*i*i;
    }
    if(sum==m){
        cout<<"armstrong"<<endl;
    }
    else{
        cout<<"not armstrong"<<endl;
    }
    return 0;
}