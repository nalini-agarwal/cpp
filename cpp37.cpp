#include<iostream>
using namespace std;
int add(int x, int y){
    return x+y;
}
int add(int x, int y, int z){
    return x+y+z;
}
float add( float x, float y){
    return x+y;
}

int main(){
    int a= 10, b=20, c=30, d,e; float f;
    d= add(a,b);
    e = add(a,b,c);
    f= add(10.3f, 22.1f);
    cout<< d<< e<<f;
    return 0;
}