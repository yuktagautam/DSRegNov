#include<stdio.h>

int main(){
    int a = 4;
    int *p = &a;
    printf("%d and %d",*p,p);

    return 0;
}