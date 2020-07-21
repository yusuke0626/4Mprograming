#include<stdio.h>

typedef struct book {
    char name[50];
    char moji[2];
    char publisher[50];
    int year;
}Book;

void struct_order(Book[]);

int main(void){
    Book hon[5] = {{"Akashi","A","明石出版",1900},
                         {"Uozumi","B","高専出版",1020},
                         {"Kakogawa","C","機械出版",2103},
                         {"Himeji","D","情報出版",1500},
                         {"Okubo","E","魚住出版",105},
                         };

    struct_order(hon);
    int i;
    for(i = 0;i < 5; i++){
        printf("%s %s %s %d\n",(hon+i)->name,(hon+i)->moji,(hon+i)->publisher,(hon+i)->year);
    }
}

void struct_order(Book hon[]){
    int i,j;
    Book tmp;
    for (i = 0;i < 5; i++){
        for(j = i+1;j < 5;j++){
            if((hon[i].year) > (hon[j].year)){
                tmp      = hon[i];
                hon[i]   = hon[j];
                hon[j]   = tmp;
            }
        }
    }
}