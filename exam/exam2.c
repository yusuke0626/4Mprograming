#include<stdio.h>

int main(void){
    int a,*b,**c;
    b=&a;
    c=&b;
    a = 6;
    *b=3;
    **c=2;
    **c=a+*b;
    printf("%d %d %d\n",a,*b,**c);
}