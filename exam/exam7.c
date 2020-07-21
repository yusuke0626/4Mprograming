#include<stdio.h>

int main(void){
    char *num[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int input;
    while(1){
        scanf("%d",&input);
        if(input > 8 ||  input < 0){
            break;   
        }else{
            printf("%s\n",*(num+input));
        }
    }
    
    return 0;
}