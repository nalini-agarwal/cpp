#include<iostream>
using namespace std;
int main(){
    int max;
    int arr[7]={7,3,5,1,8,3,0};
    max=arr[0];
    for(int i=1;i<7;i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    cout<<"max:"<<max;
}