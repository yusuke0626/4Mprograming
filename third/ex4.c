#include<stdio.h>

int main(void){
    int a,*b,**c;
    b = &a;
    c = &b;
    **c = 2;
    **c = **c + 5;
    printf("%d %d %d\n",a,*b,**c);
    return 0;
}