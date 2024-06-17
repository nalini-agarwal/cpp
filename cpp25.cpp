//binary search 
#include<iostream>
using namespace std;
int main(){
    int ar[10]={0,3,9,11,33,55,77,99,100,111}, mid, key, l=0, h=9;
    cout<<"enter key";
    cin>>key;
    while(l<=h){
        mid = (l+h)/2;
        if(key==ar[mid]){
            cout<<"key found "<<mid;
            return 0;
        }
        else if( key<ar[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<"not found";
}