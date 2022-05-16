#include<stdio.h>
#include<string.h>

struct employ
{
    int code;
    float salary;
    char name[20];
};

void show (struct employ emp) {
    printf("The code of employ is : %d \n", emp.code);
    printf("The salary of employ is : %.2f \n", emp.salary);
    printf("The name of employ is : %s \n", emp.name);
}
int main(){ 
    struct employ e1;
    struct employ *ptr;
    ptr = &e1;
    ptr->code = 101;
    ptr->salary = 12000.50;
    strcpy(ptr->name,"Chiranjit Das");
    show(e1);

    return 0;
}