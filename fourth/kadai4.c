#include<stdio.h>

double y_to_d(double y,char m ){
    double ex;
    if(m == 'd'){
        ex = 0.00929 * y;
    }else if(m == 'p'){
        ex = 0.00750 * y;
    }else{
      printf("error\n");
      return -1;  
    }
    return ex;
}

int main(void){
    char currency;
    double yen;
    printf("日本円を入力");
    scanf("%lf",&yen);
    printf("米ドル--d  英ポンド--p\n");

    scanf(" %c",&currency);
    printf("%lf\n",y_to_d(yen,currency));
    return 0;
}


