#include<stdio.h>

struct employ
{
    int code;
    float salary;
    char name[20];
};


int main(){ 
    struct employ e1, e2, e3;

    printf("Enter the code for e1: ");
    scanf("%d", &e1.code);
    printf("Enter the salary for e1: ");
    scanf("%f", &e1.salary);
    printf("Enter the name for e1: ");
    gets(e1.name);

    printf("Enter the code for e2: ");
    scanf("%d", &e2.code);
    printf("Enter the salary for e2: ");
    scanf("%f", &e2.salary);
    printf("Enter the name for e2: ");
    gets(e2.name);
    
    printf("Enter the code for e3: ");
    scanf("%d", &e3.code);
    printf("Enter the salary for e3: ");
    scanf("%f", &e3.salary);
    printf("Enter the name for e3: ");
    gets(e3.name);

    return 0;
}