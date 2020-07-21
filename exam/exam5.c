#include<stdio.h>
int func1(int);
int func2(int *);
int main(void){
    int a,b;
    a = 2; b=func1(a);
    printf("a=%d, b=%d\n",a,b);
    a = 3; b = func2(&a);
    printf("a=%d, b=%d\n",a,b);
}

int func1(int a){
    a = a*3;
    return (a)*(a);
}

int func2(int *a){
    *a=*a*3;
    return (*a)*(*a);
}