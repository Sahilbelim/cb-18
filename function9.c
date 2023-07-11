#include<stdio.h>
int Sq(int number)
{
    int sq = number * number;
    return sq;
}
int Qube(int number)
{
    int qube = number * number * number;
    return qube;
}
void main()
{
    int num, sq, qube;
    printf(" Enter value of number ");
    scanf("%d", &num);
    sq=Sq(num);
    printf("squre  is %d \n", sq);
    qube= Qube(num);
    printf("Qube of given number is %d ", qube);
}