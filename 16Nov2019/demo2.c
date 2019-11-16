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

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i != j)
                a[i][j]= 0;
            
        }
    }

    printf("Matrix After\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}