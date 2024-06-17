#include<iostream>
using namespace std;
int add(int x, int y){
    int z;
    z= x+y;
    return z;
}
int main(){
    int x=10, y=30, z;
    z= add(x,y);
    cout<<z;
}