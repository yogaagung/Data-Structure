#include "header.h"
void CreateEmpty(Stack *S)
{
    TOP (*S) = Nil;
}

void Push (Stack *S,infotype X)
{
    TOP(*S)++;
    infoTop(*S) = X;
}

void PrintStack(Stack S)
{
    int i;
    for (i=TOP(S);i>0;i--)
    {
        printf("| %d |\n", S.T[i]);
    }
}

void Pop(Stack *S, infotype *X)
{
    *X = infoTop(*S);
    TOP (*S)--;
}
