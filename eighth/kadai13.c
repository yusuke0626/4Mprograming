#include<stdio.h>
#include<math.h>
#define DELTA 1e-5

double func(double x){
    return (pow(x,3) + x-1); 
}

int main(void){
    double a,b,c;
    int n;
    a = 0;
    b = 1.0;
    n = 0;

    while(1){
        c = (a+b)/2.0;
        n++;
        if(fabs(a-b) < DELTA){
            break;
        }
        if(func(a)*func(c) < 0){
            b = c;
        }else{
            a = c;
        }
        
    }
    printf("試行回数:%d 解:%lf\n",n,c);
    return 0;
}
    




