#include<stdio.h>
#include<math.h>
#define DELTA 1e-5

int main(void){
    double xi;
    double fx;
    double xj = 1;
    int n = 0;
    
    while(1){
        xi = xj;
        fx = pow(xi,3)+ xi -1;
        xj = xi - fx / (3*pow(xi,2) + 1);
        n++;
        if(fabs(xj-xi) < DELTA){
            break;
        }
        
    }

    printf("試行回数:%d,回数:%lf\n",n,xj);
    return 0;
}