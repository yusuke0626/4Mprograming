#include<stdio.h>

int main(void){

    int dimension;
    double x[100],y[100],a[100];
    double input_num,output_num;
    int i,j,k;
    output_num = 0;
    
    printf("Input dimension;");
    scanf("%d",&dimension);

    for(i = 0; i < dimension + 1; i++){
        a[i] = 0;
    }

    for(i = 0; i <= dimension; i++){
        printf("Input known x y coordinate:");
        scanf("%lf %lf",&x[i],&y[i]);
    }

    printf("Input interpolation x coordinate:");
    scanf("%lf",&input_num);

    double infinite_1 = 1;
    double infinite_2 = 1;
    for(k = 0;k <= dimension;k++){
        for(i = 0; i <= k ; i++){
            for(j = 0; j <= k; j++){
               if(j != i){
                   infinite_1 *= (x[i] - x[j]);
               }
            }
            a[k] += y[i] / infinite_1;
            infinite_1 = 1;
        }
    }

    for(k = 1;k <= dimension ;k++){        
        for(j = 0; j < k; j++){
            infinite_2 *= (input_num - x[j]);
        }
        output_num += a[k] * infinite_2;
        infinite_2 = 1;
    }

    output_num += a[0];

    printf("Interpolation y coordinate is %lf\n",output_num);
    return 0;
}