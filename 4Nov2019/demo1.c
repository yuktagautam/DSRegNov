#include<stdio.h>

int main(){
    // int a[] = {12,23,20,30,40};
    int a[5];
    int i=0;

    for(i=0;i<5;i++){
        printf("Enter the element\n");
        scanf("%d",&a[i]);
    }
    printf("\nTraversal\n");
    // a[4]
    
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    return 0;
}