#include<stdio.h>
#include<stdlib.h>

int main(int argc,char **argv){
    char c;
    FILE *fp_r, *fp_w;
    /* ファイルのオープン */
    if ((fp_r = fopen(argv[1], "r" )) == NULL)
    {
        printf( "%sがオープンできません\n" , argv[1]);
        exit(1);
    }
    if ((fp_w = fopen(argv[2], "w" )) == NULL)
    {
        printf( "%sがオープンできません\n" , argv[2]);
        exit(1);
    }
    while (1)
    {
        if ((c = fgetc(fp_r)) == EOF)
            break;
        else
            fputc(c, fp_w);
    }
    /* ファイルのクローズ */
    fclose(fp_r);
    fclose(fp_w);
}
    