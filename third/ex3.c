#include<stdio.h>

int main(void){
    int a;
    char *month[12]={
        "January","February","March","April","May","June",
        "July","August","September","Octorber","November","December"};

    while(1){
        printf("数字を入力しなさい:");
        scanf("%d",&a);
        if(a<1||a>12){
            printf("終了します.\n");
            break;
        }else{
            printf("対応する月名　--> %s\n",month[a]);
        }
    }    
    return 0;
}