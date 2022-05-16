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
    struct employ *ptr;
    ptr = &e1;
    // (*ptr).code = 100;
    ptr->code = 101;
    printf("%d", e1.code);
    return 0;
}