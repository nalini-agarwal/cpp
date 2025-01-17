//template in class (we used stack example to understand )

#include<iostream>
using namespace std;
template <class T>
class stack{
    private:
    T *stk;
    int top;
    int size;
    public:
    stack(int sz)//constructor
    {
        size=sz;
        top=-1;
        stk=new T[size];
    }
    void push(T x);
    T pop();
};
template <class T>
void stack<T>:: push(T x){
    if(top== size-1){
        cout<<"stack is full"<<endl;
    }
    else{
        top++;
        stk[top]=x;
    }
}
template <class T>
T stack<T> :: pop(){
    T x=0;
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }
    else{
        x=stk[top];
        top--;
    }
    return x;
}
int main(){
    stack<float> s(10);
    s.push(12.3);
    s.push(3.7);
    s.push(0.0);
    return 0;
}