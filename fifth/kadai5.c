#include<stdio.h>

void add_matrix(int m1[3][3],int m2[3][3],int output[3][3]){
    int i,j; 
    for(i = 0; i <= 2; i++){
        for(j = 0;j <= 2 ;j++){
            output[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

int main(void){
    int a[3][3],b[3][3],c[3][3];
    int i;
    printf("aの行列を入力\n");
    for(i = 0; i <=2 ; i++){
        scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
    }
    printf("bの行列を入力\n");
    for(i = 0; i <= 2; i++){
        scanf("%d %d %d",&b[i][0],&b[i][1],&b[i][2]);
    }

    add_matrix(a,b,c);
    printf("a + bの行列は\n");
    for(i = 0; i <= 2; i++){
        printf("%d %d %d\n",c[i][0],c[i][1],c[i][2]);
    }

    return 0;
}