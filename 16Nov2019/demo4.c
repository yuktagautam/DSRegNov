#include<stdio.h>

int main(){
    int a = 2,b=2;

    if(&a != &b){
        printf("Equal\n");
    }

    return 0;
}