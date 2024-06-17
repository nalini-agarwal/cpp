//linear search
#include<iostream>
using namespace std;
int main(){
    int a[10], n=10, key;
    cout<<"enter array numbers:";
    for( int i=0; i<n; i++){
        cin>> a[i];
    }    
    cout<<"enter key";
    cin>>key;
    for(int i=0; i<n;i++){
        if(key==a[i]){
            cout<<"key found at "<<i;
        }
    }
    return 0;
}