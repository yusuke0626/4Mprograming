#include<stdio.h>

double volume(double,double,double);

int main(void){
    double w,l,h,v;
    printf("幅，奥行，高さを入力しなさい");
    scanf("%lf %lf %lf", &w,&l,&h);
    v = volume(w,l,h);
    printf("体積は%10.5lfです\n",v);    
}

double volume(double w, double l,double h){
    double vol;
    vol = w * l * h;
    return vol;
}