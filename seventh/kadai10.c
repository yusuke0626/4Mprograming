#include<stdio.h>

struct student{
    int grade;
    char major[80];
    int number;
    char name[80];
};
void struct_swap(struct student *,struct student *);

int main(void){
    struct student seito1 = {4,"kikai-kou",12,"Kousen Tarou"};
    struct student seito2 = {2,"denkii-kou",29,"Kousen Jiro"};
    struct_swap(&seito1, &seito2);
    printf(" %d年 %s学科 %d番 %s\n",seito1.grade,seito1.major,seito1.number,seito1.name);
    printf(" %d年 %s学科 %d番 %s\n",seito2.grade,seito2.major,seito2.number,seito2.name);
}
void struct_swap(struct student *p1 ,struct student *p2){
    struct student temp = *p2;
    temp = *p2;
    *p2 = *p1;
    *p1 = temp;
}

