#include<stdio.h>

int main(void){
    int a, *b;
    b = &a;
    a = 2;
    *b = *b+3;
    printf("%d %d \n", a,*b);
    return 0;
}
