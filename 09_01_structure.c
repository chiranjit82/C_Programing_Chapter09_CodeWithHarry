#include<stdio.h>
#include<string.h>

struct employ
{
    int code;
    float salary;
    char name[20];
};

int main(){ 
    struct employ e1;
    e1.code = 1000;
    e1.salary = 12000.45;
    strcpy(e1.name,"Rubai");

    printf("%d \n", e1.code);
    printf("%.2f \n", e1.salary);
    printf("%s \n", e1.name);
    return 0;
}