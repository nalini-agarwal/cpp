#include<iostream>
using namespace std;
int main(){
    int A[5]={3,5,7,9,11};
    int *p=A, *q=&A[3];

    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p--;
    cout<<*p<<endl;

    cout<<p<<endl;
    cout<<p+2<<endl;

    cout<<*p<<endl;
    cout<<*(p+2)<<endl;

    for( int i=0; i<5;i++){
        cout<<A[i]<<endl;
    }
    cout<<"-----------"<<endl;
    for( int i=0; i<5;i++){
        cout<<i[A]<<endl;
    }
    cout<<"-----------"<<endl;
    for( int i=0; i<5;i++){
        cout<<*(A+i)<<endl;
    }
    cout<<"-----------"<<endl;
    for( int i=0; i<5;i++){
        cout<<A+i<<endl;
    }
    cout<<"-----------"<<endl;
    for( int i=0; i<5;i++){
        cout<<p+i<<endl;
    }
    cout<<"-----------"<<endl;
    for( int i=0; i<5;i++){
        cout<<*(p+i)<<endl;
    }
    cout<<"-----------"<<endl;
    for( int i=0; i<5;i++){
        cout<<p[i]<<endl;
    }
    cout<<"-----------"<<endl;
    cout<<p<<endl;
    for( int i=0; i<5;i++){
        cout<<*p<<endl;
        p++;
    }
    cout<<p<<endl;

    cout<<"-----------"<<endl;

    cout<<p-q<<endl;
    return 0;
}