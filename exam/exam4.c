#include <stdio.h>

int main(void){
    int n;
    double a;
    scanf("%d",&n);
    scanf("%lf",&a);
    switch(n){
        case 1:
            printf("%lf\n",a*a);
            break;
        case 2:
            printf("%lf\n",a*a*a);
            break;
        default:
            printf("Sorry retry\n");
    }

    return 0;
}