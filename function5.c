#include<stdio.h>
int Add(int n1 ,int n2)
{
    int add;
    add = n1 + n2;
    return add;
}
void main()
{
    int num1, num2,num3,num4,add1,add2;

    printf("Enter value of number 1 and 2 ");
    scanf("%d %d", &num1,&num2);
    printf("Enter value of number 3 and 4 ");
    scanf("%d %d",&num3,&num4);
    add1= Add(num1, num2);
    
    printf("Additon is %d ", add1);
    add2=Add(num3, num4);
    printf("Additon is %d ", add2);
    Add(30,40);
}