#include<stdio.h>

int main(){
    int a[5]={12,23,34,9,11};
    int i=0;

    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    i=0;
    int j=4;

    for(;i<j;i++,j--){
        int temp = a[i];
        a[i] = a[j];
        a[j] =temp;
    }
    printf("\nafter\n");
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }




    return 0;
}