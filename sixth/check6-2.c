/*#include<stdio.h>
#include<stdlib.h>

int main(void){
    char c,fname_r[80];
    FILE *fp_r;
    int count[26],i;
    printf("inputi\n");
    scanf("%s",fname_r);
    if((fp_r = fopen(fname_r,"r"))==NULL){
        printf("error");
        exit(1);
    }
    for(i =0;i<26;i++){
        count[i] = 0;
    }
    while(1){
        if((c= fgetc(fp_r)) == EOF){
            break;
        }else{
            if(c==('a'+1)){
                count[c-('a'+1)] += 1;
            }
        }
    }
    printf("%c %d",'b',count[0]);
    fclose(fp_r);
}*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
char c,fname_r[80];
FILE *fp_r;
int count[26],i;
printf("読み込みファイル名を入力してください\n");
scanf("%s",fname_r);
if((fp_r=fopen(fname_r,"r"))==NULL){
    printf("%sがオープンできませんでした．\n",fname_r);
    exit(1);}
for(i=0;i<26;i++)
count[i]=0;
while(1){
    if((c=fgetc(fp_r))==EOF)
    break;
else if((c==('a'+1)))
count[c-('a'+1)]+=1;}
printf("%cは%d個\n",'b',count[0]);
fclose(fp_r);
return 0;
}