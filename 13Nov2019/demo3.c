#include<stdio.h>

int stringCount(char *p,int count,int index){

    if(p[index] =='\0')
        return count;

        // count++;
    return stringCount(p,++count,++index);
}

int main(){
    char *str = "abcdefsd";
    // int a = 2;
    // int b = a++;
    int count  = stringCount(str,0,0);
    printf("Length = %d\n",count);

    return 0;
}