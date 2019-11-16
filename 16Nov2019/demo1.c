#include<stdio.h>

int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n = 3;
    int i,j;
    printf("Matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Primary Diagonal\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i == j)
                printf("%d ",a[i][j]);
            
        }
    }

    printf("Secondary Diagonal\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i+j == n-1)
                printf("%d ",a[i][j]);
        }
    }


    return 0;
}