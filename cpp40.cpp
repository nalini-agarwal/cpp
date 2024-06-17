#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp; 
    temp= *a;
    *a=*b;
    *b=temp;

}
int main(){
    int x=10; int y= 20;
    swap(&x,&y);
    cout<<x<<" "<<y;
    return 0;

}

//this was parameter passing-- pass by adress