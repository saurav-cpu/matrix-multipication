//find the multiple of matrix
#include<iostream>
using namespace std;
int main()
{
    int i,j,C, A[3][3]={{2,3,4},{7,6,5},{5,4,3}},B[3][3]={{6,3,8},{4,1,6},{7,4,7}};
    for(i=0;i<=3;i++){
        for(j=0;j<=3;j++){
            C = A[i][j]*B[j][i];
            cout<<C<<"  ";
        }
        cout<<endl;
    }
    return 0;
}