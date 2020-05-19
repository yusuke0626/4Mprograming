#include<stdio.h>

int main(void){
    int a[10] = {1,3,5,7,9,8,6,4,2,10},*p;
    p=a;
    printf("A=%d\n",*p);
    p=p+5;
    printf("B=%d\n",*p);
}

