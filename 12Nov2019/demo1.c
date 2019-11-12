#include<stdio.h>
// 2 3 = 8

int sum(int number,int s){
    if(number == 0)
        return s;

    s = s + number%10;

    return sum(number/10,s);
}

int main(){
    int a = 12345;
    int result = sum(a,0);

    printf("Result  = %d\n",result);

    return 0;
}