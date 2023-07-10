#include<stdio.h>
int Sub(int n1,int n2)

{
    int sub;
    sub = n1 - n2;
    return sub;
}

void main()
{
    int num[2],sub1;

    printf(" Enter value of number 1 ");
    scanf("%d", &num[0]);
    printf(" Enter value of nuumber 2 ");
    scanf("%d", &num[1]);
    sub1=Sub(num[0], num[1]);
    printf("subtraction is %d", sub1);
}