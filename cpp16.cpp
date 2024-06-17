#include<iostream>
using namespace std;
int main(){
    int n, sum= 0;
    cout<<"enter n ";
    cin>>n;
    for( int i=1; i<=n; i++){
        if(n%i== 0){
            sum = sum+i;
        }
    }
    cout<<"sum of factors "<<sum<<endl;
    if(sum/2 == n){
        cout<<n<<" is a perfect number"<<endl;
    }
    else{
        cout<<n<<" is not a perfect number"<<endl;
    }
    return 0;
}