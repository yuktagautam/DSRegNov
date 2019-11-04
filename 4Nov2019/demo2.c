#include<stdio.h>

/*in this we will search each element of the array with our given number.*/


int main(){
    int a[5]={10,20,30,40,50};
    //Linear Search
    int k=50;
    int i=0;
    for(i=0;i<5;i++){
        if(a[i] == k){
            printf("Number found at %d index\n",i);
            break;
        }
    }
    if(i==5){
        printf("Number not Found\n");
    }


    

    return 0;
}