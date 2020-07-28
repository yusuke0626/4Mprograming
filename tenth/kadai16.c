#include<stdio.h>
#include<math.h>

int main(void){
    int h, i, j, n;
    double a[100][100];
    double b[100];
    double x[100],y[100];
    double sigma[100];


    printf("方程式の数:");
    scanf("%d", &n);
    for (i = 0;i < n; i++){
        sigma[i] = 0;
    }
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

    for(i = 0; i < n; i++){
        printf("初期値 x[%d] = ",i);
        scanf("%lf",&x[i]);
    }

    int flag = 0;
    int count = 0;

    while(1){
        count++;
        flag = 0;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(j != i){
                    sigma[i] += a[i][j] * x[j];
                }
            }
        }

        for(i = 0; i < n; i++){
            y[i] = (1 / a[i][i])*(b[i] - sigma[i]);
            sigma[i] = 0;

            if(fabs(y[i] - x[i]) > 1e-5){
                flag = 1;
            }
            x[i] = y[i];
        }
        if(flag == 0){
            break;
        }
    }
    for(i = 0; i < n; i++){
        printf("x%d=%lf\n",i+1,y[i]);
    }
    printf("計算回数:%d\n",count);
    return 0;
}






