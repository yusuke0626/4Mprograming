#include <stdio.h>

int main(void){
    char *p;//ポインタ変数としてpを宣言
    char str[20];//20個の文字が格納できる配列を生成
    p = str;//ここでpとstrの0番目のアドレスが一致していることを示す．これは p = str[0]と同義
    printf("数字を入力:");
    scanf("%s",p);//さっきp = strとしたのでつまりscanf("%s",str)に同じ
    while (*p/*カウントのためにnを用意しているのならstr[n]でもよい*/ != '\0') {  //*pはアスタリスクがついているので通常変数モード
        printf("%s\n",p);//pからの文字配列を表示(\nまでを表示) 
        p++;//char型のバイト数だけアドレスがずれる
    }
    return 0;
}
