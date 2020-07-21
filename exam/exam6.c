#include<stdio.h>
int SUM(int);

int main(void){
    int n;
    printf("input:");
    scanf("%d",&n);
    printf("1kara %d made souwa is %d",n,SUM(n));
}

int SUM(int n){
    int j=1;
        if (n == 1){
            return 1;
        }else{
                j = n * n;
        }
        n--;
        return j + SUM(n);
}
