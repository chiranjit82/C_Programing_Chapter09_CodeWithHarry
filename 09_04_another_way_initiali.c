#include<stdio.h>
struct employ
{
    int code;
    float salary;
    char name[20];
};

int main(){ 
    struct employ e1 = {100,10000.34,"Rubai"};
    printf("The code is %d \n", e1.code);
    printf("The salary is %.2f \n", e1.salary);
    printf("The name is %s \n", e1.name);
    return 0;
}