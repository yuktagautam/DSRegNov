#include<stdio.h>
//first all tezeors must come than all ones must come
int main(){
    int a[] = {1,0,1,0,1,1,0,0};
    int count = 0,i=0;

    for(i=0;i<8;i++){
        if(a[i] == 0)
            count++;
    }

    for(i=0;i<8;i++){
        if(i<count){
            a[i] = 0;
        }
        else{
            a[i] = 1;
        }
    }
    for(i=0;i<8;i++){
        
    }


    return 0;
}
