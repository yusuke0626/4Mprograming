#include<stdio.h>
#include<math.h>

int main(void){

    int dimension;
    int data_num;
    double x[100],y[100];
    int i,j,k;
    
    printf("近似曲線の次数を入力:");
    scanf("%d",&dimension);

    printf("データの数を入力:");
    scanf("%d",&data_num);

    for(i = 0; i < data_num; i++){
        printf("点の座標を入力 x y:");
        scanf("%lf %lf",&x[i],&y[i]);
    }


    double sigma[100][100];
    double right_num[100];

    for(i = 0; i < data_num; i++){
        for(j = 0; j < data_num; j++){
            sigma[i][j] = 0;
        }
        right_num[i] = 0;
    }
//jは行　iは列　kはXk値　
    for(i = 0; i <= dimension; i++){
        for(j = 0; j <= dimension; j++){
            for(k = 0; k < data_num; k++){
                sigma[i][j] += pow(x[k], i+j);
            }
        }
    }
    for(i = 0; i <= dimension; i++){
        for (k = 0; k < data_num; k++){
            right_num[i] += y[k] * pow(x[k],i);   
        }
        
    }

    int h;    
    double keisu1,keisu2;

    for(h = 0; h <= dimension; h++){
        keisu1 = sigma[h][h];
        for(i=h; i <= dimension; i++){
            sigma[h][i] /= keisu1;
        }
        right_num[h] /= keisu1;
        for(i = 0; i <= dimension; i++){
            if(i!=h){
                keisu2 = sigma[i][h];
                for(j = h;j <= dimension; j++){
                    sigma[i][j] -=keisu2*sigma[h][j];
                }
                right_num[i] -= keisu2*right_num[h];
            }
        }
    }

    printf("y=");
    for(i = dimension; i >= 0; i--){
        if(right_num[i] >= 0){
            if(i != dimension){
                printf("+");
            }
        } 
        printf("%.2lfx^%d",round(right_num[i] * 100) / 100,i);        
    }
    printf("\n");

    return 0;
}

