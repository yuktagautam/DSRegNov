#include<stdio.h>
#include<string.h>

// 0 to 255


int main(){
    char a[] = "silents";
    char b[] = "listena";

    int c[256];
    int d[256];

    int i=0;
    int flag = 0;
    
    for(i=0;i<256;i++){
        c[i] = 0;
        d[i] = 0;
    }

    for(i=0;a[i] && b[i];i++){
        ++c[ a[i] ];
        ++d[ b[i] ];
    }

    for(i=0;i<256;i++){

        if(c[i] != d[i]){
            flag = 1;
            printf("Not anagram\n");
            break;
        }

    }

    if(flag == 0){
        printf("Anagram\n");
    }



    return 0;
}