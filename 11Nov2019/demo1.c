#include<stdio.h>
#include<string.h>
// {1,2,3,4,5,1,45,9}


int checkPalindrome(char *p,int start, int end){
    if(p[start] != p[end]){
        return 0;
    }
    
    if(start == end)//For Odd case
        return 1;

    if(start > end)//For even case
        return 1;


    return checkPalindrome(p,start+1,end-1);
}


int main(){
    char *a = "ABCCBA";
    int len = strlen(a);
    // printf("%d\n",a);
    checkPalindrome(a,0,len-1);
    return 0;
}