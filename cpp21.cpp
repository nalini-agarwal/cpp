#include<iostream>
using namespace std;
int main(){
    int m,rem,rev,n;
    cout<<"enter a number";
    cin>>n;
    m=n;
    rev=0;
    while(m!=0){
        rem= m % 10;
        rev=(rev*10)+rem;
        m=m/10;
    }
    cout << " The reverse of the number is: " << rev << endl;
    if(rev==n){
        cout<<"it is a palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
    return 0;
}