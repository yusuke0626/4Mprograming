#include<stdio.h>

int Sum(int);

int main(){
    int n;
    printf("input\n");
    scanf("%d",&n);
    printf("%d\n",Sum(n));
}

int Sum(int n){
    if(n==1){
        return 1;
    }else{
        return n + Sum(n-1);
    }
}