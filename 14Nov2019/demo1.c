#include<stdio.h>
// 1 2
// 4 1

// 1 2
// 4 2

// Column Major 
// Row Major
// Transpose 



int main(){

    int a[2][2]={{1,2},{4,1}};
    int b[2][2]={{1,2},{4,2}};
    int c[2][2];

    int i=0,j=0,k=0,sum=0;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum =0;
            for(k=0;k<2;k++){
                sum += a[i][k]*b[k][j];
            }
            c[i][j]= sum;
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }




    return 0;
}