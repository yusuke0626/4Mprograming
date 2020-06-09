#include<stdio.h>

int main(int argc,char **argv){
    int i = 0;
    while(argv[1][i] != '\0'){
        i++;
    }
    int j = 0;
    while(argv[2][j] != '\0'){
        j++;
    }

    if(i < j){
       printf("%s\n",argv[2]);
    }else{
       printf("%s\n",argv[1]);
    }
    
    return 0;
}