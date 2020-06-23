#include<stdio.h>

struct student{
    int grade;
    char major[80];
    int number;
    char name[80];
};
void disp_struct(struct student*,struct student*);

int main(void){
    int i;
    struct student seito1 = {1,"toshi",501,"akashi tarou"},seito2 = {2,"kenchiku",503,"uozumi jiro"};
    disp_struct(&seito1,&seito2);
    printf(" %d年 %s学科 %d番 %s\n",seito1.grade,seito1.major,seito1.number,seito1.name);
    printf(" %d年 %s学科 %d番 %s\n",seito2.grade,seito2.major,seito2.number,seito2.name);
}

void disp_struct(struct student *p1 ,struct student *p2){
    *p1 = *p2;
}

