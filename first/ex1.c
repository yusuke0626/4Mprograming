#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main(void){
    int a;
    float rad,ans;
    printf("角度を入力してください");
    rad = a * PI / 180;
    ans = sin(rad);
    printf("sin(%d)は%fです．\n",a,ans);
    return 0;
}

