#include<stdio.h>
//10101100->


int main(){
    int arr[] = {11,55,44,32,10};
    int i=0;

    for(i=0;i<4;i++){
        arr[i] = arr[i+1];
    }
    arr[i] = 0;


    return 0;
}
