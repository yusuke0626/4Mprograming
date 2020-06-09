#include<stdio.h>

int main(int argc,char *argv[]){
    int i;
    for(i=0; *(argv[1]+i)!='\0'; i++);
        printf("入力%sis%d",argv[1],i+1);
    
}