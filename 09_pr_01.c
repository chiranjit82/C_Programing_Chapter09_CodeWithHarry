#include<stdio.h>

struct vector
{
    int x;
    int y;
};

int main(){ 
    struct vector v1,v2;
    v1.x = 5;
    v1.y = 3;
    printf("The value of x1 = %d and y1 = %d \n", v1.x, v1.y);
    v2.x = 12;
    v2.y = 36;
    printf("The value of x2 = %d and y2 = %d \n", v2.x, v2.y);
    return 0;
}