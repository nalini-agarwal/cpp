#include<iostream>
using namespace std;
void fun(){
    static int x=10;
    x++;
    cout<<x<<endl;
}
int main(){
    fun();
    fun();
    return 0;
}
//if the x variable was non static then the output would have been = 11 11 
// this means that static variables are declared once throughout and non static are allocated in memory again and again each time it is called. 