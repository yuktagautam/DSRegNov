#include<stdio.h>

int main(){
    int a[]={1,2,3,4,1};
    int i=0,j=0;

    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(a[i] == a[j]){
                printf("%d is duplicate \n",a[i]);
                break;
            }
        }
    }


    return 0;
}