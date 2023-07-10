#include<stdio.h>
void printsymbol(char sy,int num )
{

    int count;
    for (count = 1; count <= num;count++)
    {
        printf("%c", sy);
    }
    printf("\n");
    
}
void main()
{
    char symbol;
    int number;

    printf("Eneter symbol ");
    scanf("%c", &symbol);
    printf("Enter number of symbol ");
    scanf("%d", &number);

    printsymbol(symbol, number);
    printf("name : sahil \n");
    printsymbol(symbol, number);

    printf("age : 18 \n");
    printsymbol(symbol, number);
    printf("weight :45.36 \n");
    printsymbol(symbol,number);
}