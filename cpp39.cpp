#include<iostream>
using namespace std;
int sum( int x , int y=0, int z=0){
    return x+y+z;;
}
int main(){
    cout<<sum(1)<<endl;
    cout<<sum(2,3)<<endl;
    cout<<sum(2,3,4)<<endl;
    return 0;
}