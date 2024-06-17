#include<iostream>
using namespace std;
int main(){
    int n, rem,m;
    cout<<"enter number"<<endl;
    cin>>n;
    m=n;
    while(n>0){
        rem=n%10;
        n=n/10;
        cout<<rem;
    }
    return 0;
}