#include<stdio.h>
// asterisk
char * replaceCharacter(char *p,char r,int index){
    if(index == strlen(p))
        return p;

    if(p[index] == 'a')
        p[index] = r;

    return replaceCharacter(p,r,++index);
}



int main(){
    char p[] = "abcdea";
    char r = 'y';

    char *str = replaceCharacter(p,r,0);

    printf("%s\n",str);

    return 0;
}