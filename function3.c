// 3) without arguments with return value function
#include<stdio.h>
float getpi()
{
    return 3.14;
}
void main()
{

    int r;
    float area, pi;
    pi = getpi();
    printf("Enter value of circle radius ");
    scanf("%d", &r);

    area = pi * (r * r);
    printf("area of circle is %f ", area);
}