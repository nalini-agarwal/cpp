#include<iostream>
using namespace std;
int main(){
    int x=10; 
    int &y=x; // same memory for x and y and y can only refer to x here not more than one variable.

    cout<<x<<endl;
    y++;
    x++;
    cout<<x<<endl; 
    cout<<&x<<" "<< &y;
    return 0;
}