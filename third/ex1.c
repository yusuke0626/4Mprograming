#include<stdio.h>

int main(void){
    int i,a[10]={10,2,7,4,15,6,12,8,20,1};
    printf("a=%d\n",*(a+3));
    printf("b=%d\n",*(a+7));
    return 0;
}