#include<iostream>
using namespace std;
int main(){
    int ar1[2][3]={{2,3,4},{4,5,6}};
    int ar2[2][3]={{5,7,8},{2,9,4}};
    int ar3[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            ar3[i][j]=ar1[i][j]+ar2[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<ar3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}