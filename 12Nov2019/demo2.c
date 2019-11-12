#include<stdio.h>


int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int i=0,j=0;
    for(i=0;i<3;i++){
       for(j=0;j<3;j++){
          printf("%d ",a[i][j]); 
       } 
       printf("\n");
    }

    return 0;
}





// 1. Length of a String using recursion.
// 2. replace a character in string with another character using recursion.