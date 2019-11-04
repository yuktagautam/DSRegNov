#include<stdio.h>

int main(){

    //sorted array
    int a[10]={11,22,33,44,55,60,70,80,90,100};
    int l = 0;
    int u = 9;
    int k=45;
    int m=0;
    int flag = 0;

    while(l<=u){ //true
        m = (l+u)/2;
        if(a[m] == k){
            flag =1;
            printf("Number found at index %d\n",m);
            break;
        }

        if(k<a[m]){
            u = m-1;
        }
        if(k>a[m]){
            l = m+1;
        }
    }
    if(flag == 0){
        printf("Number not Found\n");
    }

    return 0;
}