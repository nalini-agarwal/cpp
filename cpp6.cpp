#include <iostream>
using namespace std;
int main(){
    int i=5,j;
    j=i++;
    cout<<j<<" "<<i<<endl;
    int k=5,l;
    l=++k;
    cout<<l<<" "<<k<<endl;
    return 0;
}