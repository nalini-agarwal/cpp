// returning addtition of 2 numbers 
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    string name;
    cout<< "enter 2 numbers";
    cin>>a>>b;
    cout<< "enter your name";
    getline(cin,name);
    c=a+b;
    cout<<"addition is "<<c<<"and your name is "<< name;
    return 0;
}

