#include<stdio.h>

void s_to_b(char str[]){
    int i;
    for(i=0;i<80;i++){
        if(str[i] == '\0')
            break;
        str[i] += 33;
    }
}

int main(void){
    char str[80];
    scanf("%s",str);
    s_to_b(str);
    printf("%s\n",str);
        
}