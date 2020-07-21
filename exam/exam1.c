#include<stdio.h>
double volume(double,double,double);
int main(void){
    double w,l,h,v;
    printf("input:");
    scanf("%lf %lf %lf",&w,&l,&h);
    v = volume(w,l,h);
    printf("体積は%10.3lfです．\n",v);
    return 0;
} 

double volume(double width,double length,double height){
    double vol;
    vol = width* length*height;
    return vol;
}