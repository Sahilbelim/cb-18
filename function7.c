#include<stdio.h> 
float getpi()
{
    return 3.14159265359;
}
void main()
{
    float r,aera,pi;
    pi = getpi();
    printf("Enter radius of circle ");
    scanf("%f", &r);
    aera = pi * r * r;
    printf("aera of circle is %f \n", aera);
  
}