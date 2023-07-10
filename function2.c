// 2) with arguments without return value function
#include<stdio.h> 
void printsymbol( char c,int num)
{
    int i;
    for (i = 1; i <= num;i++)
    {

        printf("%c", c);
        
    }
    printf("\n");
    
}
void main()
{
    char s;
    int size;
    printf("Enter symbol ");
    scanf("%c", &s);

    printf("Enter size of symbol");
    scanf("%d", &size);

    printsymbol("*",10);

    printf(" name : sahil \n");

    printsymbol(s, size);

    printf(" age : 18 \n");

    printsymbol(s, size);

    printf(" weight : 45.36 \n");

    printsymbol(s, size);
}