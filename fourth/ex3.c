#include<stdio.h>

void tmp2(int*,int*);

int main(void){
    int a,b;
    a = 10;
    b = 5;
    tmp2(&a,&b);
    printf("a=%d, b=%d\n",a,b);
    return 0;
}

void tmp2(int *a,int *b){
    *a = 100;
    *b = 50;
}