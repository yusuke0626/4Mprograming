#include<stdio.h>

int main(void){
    char *num[11] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten"};
    int input;

    while(1){
        scanf("%d",&input);
        if(input > 10)
           break;
        printf("%s\n",num[input]);
    }
    
    return 0;
}