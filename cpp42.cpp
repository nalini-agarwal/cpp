#include<iostream>
using namespace std;
void swap(int &a, int &b){
    cout<<"adress of a and b"<< &a<<" " <<&b<<endl;
    int temp;
    temp = a;
    a=b;
    b= temp;
}
int main(){
    int x=10; int y= 20;
    swap(x,y);
    cout<<"adress of x and y"<<&x<<" "<<&y<<endl;
    cout<<x<<" "<<y<<endl;
    return 0;
}

//this is pass by refrence. here same memory is allocated to both x and a and for y and b. 