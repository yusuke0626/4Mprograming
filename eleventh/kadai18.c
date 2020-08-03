#include<stdio.h>

int main(void){

    int dimension;
    double x[100],y[100],z[100];
    double input_num,output_num;
    int i,j;
    output_num = 0;
    
    printf("Input dimension;");
    scanf("%d",&dimension);

    for(i = 0; i < dimension + 1; i++){
        z[i] = 1;
    }

    for(i = 0; i <= dimension; i++){
        printf("Input known coordinate x y:");
        scanf("%lf %lf",&x[i],&y[i]);
    }

    printf("Input interpolation coordinate x:");
    scanf("%lf",&input_num);    

    for(i = 0; i < dimension + 1; i++){
        for(j = 0; j < dimension + 1; j++){
            if(j != i){
                z[i] *= ((input_num - x[j]) / (x[i] - x[j]));
            }
        }
        output_num += y[i] * z[i];
    }

    printf("Interpolation coordinate y is %lf\n",output_num);
    return 0;
}