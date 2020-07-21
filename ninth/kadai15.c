#include<stdio.h>

int main(void){
    int h, i, j, n;
    double a[100][100];
    double b[100];
    double keisu1,keisu2;

    printf("方程式の数:");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("第%d式第%d項係数:",i+1,j+1);
            scanf("%lf", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        printf("第%d式の定数項（左辺項）を入力してください:", i+1);
        scanf("%lf", &b[i]);
    }

    for(h = 0; h < n; h++){
        keisu1 = a[h][h];
        for(i=h; i<n; i++){
            a[h][i] /= keisu1;
        }
        b[h] /= keisu1;
        for(i = 0; i < n; i++){
            if(i!=h){
                keisu2 = a[i][h];
                for(j=h;j<n;j++){
                    a[i][j] -=keisu2*a[h][j];
                }
                b[i] -= keisu2*b[h];
            }
        }
    }

    for(i = 0; i < n; i++){
        printf("x%d=%lf\n",i+1,b[i]); 
    }
    return 0;
}