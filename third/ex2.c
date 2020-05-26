#include<stdio.h>

int main(void){
    int i,a[2];
    printf("文字を二個入力してください\n");
    for(i=0;i<2;i++){
        scanf("%d",&a[i]);
    }
    if(*a < *(a+1)){
        printf("大きい方は%d\n",*a);
    }else if(*a > *(a+1)){
        printf("大きい方は%d\n",*(a+1));
    }

    return 0;
}