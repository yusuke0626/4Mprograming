#include <stdio.h>

int main(void)
{
    int i = 0;
    int j = 0;
    int replace;
    int n[5];

    while (i < 5){
        scanf("%d", (n + i));
        i++;
    }

    i = 0;
    while (i < 5){
        while(j < i){
            if (*(n+j) > *(n+i)){
                replace = *(n+j);
                *(n+j) = *(n+i);
                *(n+i) = replace;
            }
            j++;
        }
        j = 0;
        i++;
    }

    i = 0;
    while (i < 5){
        printf("%d ", *(n + i));
        i++;
    }
    printf("\n");
    return 0;
}