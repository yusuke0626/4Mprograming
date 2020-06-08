#include<stdio.h>

double test_ave(int,int,int);

int main(void){
    int eng,math,phy;
    double ave;
    printf("テストの点を入力してください:");
    scanf("%d %d %d,",&eng,&math,&phy);
    ave = test_ave(eng,math,phy);
    printf("平均点は%10.1lfです．\n",ave);
}

double test_ave(int e,int m, int p){
    double average;
    average = (e+m+p)/3;
    return average;
}
