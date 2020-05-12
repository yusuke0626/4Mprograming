#include<stdio.h>

int main(void){
    int i,sum=0;
    for(i = 0;i <= 100; i+=2){
        printf("偶数の和=%d\n",sum);
    }
    sum = 0;
    for(i = 1;i < 100;i += 2){
        sum += i;
    }
    printf("奇数の和=%d\n",sum);
    return 0;
}
