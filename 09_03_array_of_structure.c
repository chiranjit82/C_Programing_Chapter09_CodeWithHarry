#include<stdio.h>
#include<string.h>
struct employ
{
    int code;
    float salary;
    char name[20];
};

int main(){ 
    struct employ facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 12540.45;
    strcpy(facebook[0].name,"Chiranjit Das");
    return 0;
}