#include<stdio.h>
#include<string.h>

typedef struct employ
{
    int code;
    float salary;
    char name[20];
} emp;

void show (emp em) {
    printf("The code of employ is : %d \n", em.code);
    printf("The salary of employ is : %.2f \n", em.salary);
    printf("The name of employ is : %s \n", em.name);
}

int main(){ 
    emp e1;
    emp *ptr;
    ptr = &e1;
    ptr->code = 12;
    ptr->salary = 120.5;
    strcpy(ptr->name,"Rubai Das");
    show(e1);
    return 0;
}