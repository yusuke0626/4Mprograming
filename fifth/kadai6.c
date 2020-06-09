#include <stdio.h>

int power(int, int);

int main(void)
{
    int n, m;
    printf("nを入力:");
    scanf("%d", &n);
    printf("mを入力:");
    scanf("%d", &m);
    if(power(n,m) != -1){
        printf("%d\n", power(n, m));
    }
    return 0;
}


int power(int n, int m){
    int i,j=1;
    if (((m > 0) && (m <= 3)) && ((n > 0) && (n <= 100))){
        if (n == 1){
            return 1;
        }else{
            for (i = 0; i < m; i++){
                j = n * j;
            }
        }
        n--;
        return j + power(n, m);
    }else{
        printf("error\n");
        return -1;
    }
}
