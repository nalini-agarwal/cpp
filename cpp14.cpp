#include<iostream>
using namespace std;
int main(){
    int n, fact =1;
    cout<<"enter n";
    cin>>n;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    cout<<"factorial is " <<fact;
}