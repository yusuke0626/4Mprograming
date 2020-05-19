#include<stdio.h>

int main(void){
    char a[]={"Program"},*p;
    p= a;
    printf("A=%s\n",p);
    p++;
    printf("B=%s\n",p);
    return 0;
}
