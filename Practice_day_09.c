#include<stdio.h>
#include<string.h>

struct employ
{
    int sl_no;
    float salary;
    char name[10];
};


int main(){ 
    struct employ e1;
    e1.sl_no = 100;
    e1.salary = 5000.00;
    strcpy(e1.name,"Rubai");

    printf("%d \n", e1.sl_no);
    printf("%.2f \n", e1.salary);
    printf("%s \n", e1.name);

    return 0;
}