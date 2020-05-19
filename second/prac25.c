#include<stdio.h>

int main(void){
    char a[20];
    char *p;

    scanf("%s",a);    
    p = a;

    while(*p){
        printf("%s\n",p++);
    }

    return 0;
}