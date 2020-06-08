#include<stdio.h>

void tmp(int* ,int*);

int main(void){
    int a,b;
    a = 35;
    b = 50;
    tmp(&a,&b);
    printf("a = %d, b=%d\n",a,b);
}

void tmp(int *a,int *b){
    *a = *a/5 ;
    *b = *b*2;
}