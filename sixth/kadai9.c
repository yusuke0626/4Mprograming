#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    char c,filename[80]; 

    printf("読み込みファイル名を入力してください:");
    scanf("%s",filename);
    if((fp=fopen(filename,"r")) == NULL){
        printf("開けませんでした\n");
        exit(1);
    }

    int i,j;
    int count[26];
    for(i = 0;i < 26; i++){
        count[i] = 0;
    }
    while(1){
        if((c = fgetc(fp)) == EOF){
            break;
        }else{
            printf("%c",c);
            if(c>90 && c<=122){
                c = c - 32;
            }
            for(i = 65;i <= 90; i++){
                if(c == i){
                    count[i-65]++;
                    break;
                }
            }
        }
    }

    fclose(fp);

    for(i = 0; i < 26; i++){
        printf("%c:%d\n",i+65,count[i]);
    }

    return 0;
}