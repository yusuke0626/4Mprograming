#include <stdio.h>
#include <stdlib.h>
double det(double a[][100], int n);
int main()
{
    int i, j, n;
    double a[100][100], b[100], aa[100][100], x[100], da;

    printf("n=");
    scanf("%d", &n);
    printf("a[i][j]=");
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%lf", &a[i][j]);
        }
    }
    printf("b[i]=");
    for (i = 0; i < n; i++){
        scanf("%lf", &b[i]);
    }

    da = det(a, n);

    if (da == 0){
        printf("解は存在しない\n");
        exit(1);
    }

   
    int k;
    for (j = 0; j < n; j++){
        for (i = 0; i < n; i++){
            for (k = 0; k < n; k++){
                aa[i][k] = a[i][k];
            }
        }
        for (i = 0; i < n; i++){
            aa[i][j] = b[i];
        }
        x[j] = det(aa, n) / da;
        printf("x[%d]=%lf\n", j+1, x[j]);
    }
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
