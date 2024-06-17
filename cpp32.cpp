#include<iostream>
using namespace std;
int main(){
    int a[10][10],b[10][10],c[10][10], r1,c1,r2,c2,i,j,k;
    cout<<"enter size of first matrix: ";
    cin>>r1>>c1;
    cout<<"enter size of second matrix: ";
    cin>>r2>>c2;
    if(c1!=r2){
        cout<<"cannot be multiplied!";
        return 0;
    }
    cout<<"enter elements of first matrix: "<<endl;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cout<<"enter element a"<<i+1<<j+1<<":"<<endl;
            cin>>a[i][j];
        }
    }

    cout<<"enter elements of second matrix: "<<endl;
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cout<<"enter element b"<<i+1<<j+1<<":"<<endl;
            cin>>b[i][j];
        }
    }
    
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            c[i][j]=0;
            for(k=0;k<c1; k++){//whyc1? 
                c[i][j]+= a[i][k]*b[k][j]; // doubt how?
            }
        }
    }

    cout<<endl<<"output:"<<endl;
    for(i=0;i<r1;i++){
        for(j=0;j<c2; j++){
            cout<<" "<<c[i][j];
            if(j==c2-1){
                cout<<endl;   
            }
        }
    }
    return 0;
}