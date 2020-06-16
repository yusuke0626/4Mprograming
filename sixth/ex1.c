#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c, fname_r[80], fname_w[80];
    FILE *fp_r, *fp_w;
    /* ファイル名の入力 */
    printf("読み込みファイル名を入力して下さい：");
    scanf("%s", fname_r);
    printf("書き込みファイル名を入力して下さい：");
    scanf("%s", fname_w);
    /* ファイルのオープン */
    if ((fp_r = fopen(fname_r, "r" )) == NULL)
    {
        printf( "%sがオープンできません．¥n" , fname_r);
        exit(1);
    }
    if ((fp_w = fopen(fname_w, "w" )) == NULL)
    {
        printf( "%sがオープンできません．¥n" , fname_w);
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