//find the multiple of matrix
#include<iostream>
using namespace std;
int main(){
    int a[10][10],b[10][10],m[10][10],i,j,c,d,e,f;
    cout<<"enter the number of row of 'a' matrix = ";
    cin>>c;
    cout<<"enter the number of column of 'a' matrix = ";
    cin>>d;
    cout<<"enter the number of row of 'b' matrix = ";
    cin>>e;
    cout<<"enter the number of column of 'b' matrix = ";
    cin>>f;
    if(d!=e){
        cout<<"multipication of this matrix is not possible because column of matrix 'a' is not equal to row of matrix of 'b' ";
        return 0;
    }
    cout<<"enter the element of 'a' matrix =\n";
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter the element of 'b' matrix =\n";
    for(i=0;i<e;i++){
        for(j=0;j<f;j++){
            cin>>b[i][j];
        }
    }
    cout<<"multipication of matrix a and b =\n ";
    for(i=0;i<c;i++){
        for(j=0;j<f;j++){
            m[i][j]=0;
            for(int k=0;k<d;k++){
                m[i][j]=m[i][j]+a[i][k]*b[k][j];
            }
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
