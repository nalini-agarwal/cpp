#include<iostream>
#include <cmath>
using namespace std;
int main(){
    float a,b,c,r1,r2;
    cout<<"enter a b and c ";
    cin>> a>>b>>c;
    r1 = (-b +sqrt((b*b-4*a*c)))/2*a;
    r2 = (-b -sqrt((b*b-4*a*c)))/2*a;
    cout<<r1<<" "<< r2;
    return 0;
}