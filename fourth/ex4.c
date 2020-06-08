#include<stdio.h>

void s_to_b(char[]);

int main(void){
    char str[80];
    printf("英小文字で文字列を入力しなさい");
    scanf("%s",str);
    s_to_b(str);
    printf("英大文字で表すと---> %s\n",str);
}

void s_to_b(char str[]){
    int i;
    for(i=0; i<80; i++){
        if(str[i]=='\0'){
            break;
        }
        str[i] -= 32;
    }
}