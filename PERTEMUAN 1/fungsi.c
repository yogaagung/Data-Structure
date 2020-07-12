#include "header.h"

void creatempety(Stack *S)
{

    TOP(*S)=nil;
    if (TOP(*S)%2==0)
    {
        printf("Ganjil");
    }
    else
    {
        printf("Genap");
    }
}


void push(Stack *S,infotype X)
{
    TOP(*S)++;
    infotop(*S)=X;


}

void pop(Stack *S,infotype *X)
{
    *X=infotop(*S);
    TOP(*S)--;
}

void printStack(Stack S)
{
    int i;
    for(i=TOP(S);i>0;i--)
    {
        if (i%2==0)
        {
            printf("Genap");
        }
        else
        {
            printf("Ganjil");
        }
        //printf("|%d|\n",S.T[i]);
    }
}

