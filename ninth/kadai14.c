#include <stdio.h>
#include <stdlib.h>

double det(double a[][100], int n);

int main()
{
    int i, j, n;
    double a[100][100], da;
    double temp[100][100];

    printf("方程式の数:");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("第%d式第%d項係数:",i+1,j+1);
            scanf("%lf", &a[i][j]);
            temp[i][j] = a[i][j];
        }
    }
    da = det(a, n);
    if (da == 0){
        printf("解は存在しない\n");
        exit(1);
    }

    double solusion;
    double con[100];
    for(i = 0; i < n; i++){
        printf("第%d式の定数項（左辺項）を入力してください:", i+1);
        scanf("%lf", &con[i]);
    }
    for (i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i != 0){
                temp[j][i-1] = a[j][i-1];
            }
            temp[j][i] = con[j];
        }
        solusion = det(temp, n) / da;
        printf("x%d = %lf\n",i + 1,solusion);
    }
    return 0;
}


double det(double a[][100], int n)
{
    double b[100][100], sum = 0;
    int i, j, m;

    if (n == 1)
        return a[0][0];
    for (m = 0; m < n; m++)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 1; j < n; j++)
            {
                b[i][j - 1] = a[i][j];
            }
        }
        for (i = m + 1; i < n; i++)
        {
            for (j = 1; j < n; j++)
            {
                b[i - 1][j - 1] = a[i][j];
            }
        }
        if (m % 2 == 0)
            sum += a[m][0] * det(b, n - 1);
        else
            sum -= a[m][0] * det(b, n - 1);
    }
    return sum;
}

//#include<stdio.h>

/*int main(void){

}*/