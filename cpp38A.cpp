#include<iostream>
using namespace std;
template <class T, class R>
void add(T x, R y){
    cout<<x+y<<endl;
}
int main(){
    add(3.9, 8);
    return 0;
}