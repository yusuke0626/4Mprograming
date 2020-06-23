#include<stdio.h>

struct student{
    int grade;
    char major[80];
    int number;
    char name[80];
};

int main(void){
    int i;
    struct student seito[2] = {
        {1,"kikai-kou",101,"kousen tarou"},
        {2,"denki-kou",102,"kousen jirou"},
    };

    for(i =0;i<2;i++){
        printf("%d %s %d %s\n",seito[i].grade,seito[i].major,seito[i].number,seito[i].name);
    }
}

