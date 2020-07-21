#include<stdio.h>

int main(void){
    char a[80],*p;
    printf("input:");
    scanf("%s",a); 
    for(p = a; *p!='\0';p++){
        printf("%s \n",p);
    }
    return 0;
}