#include "header.h"

void CreateEmpty(Stack *S)
{
    TOP(*S)=Nil;
}
boolean IsEmpty(Stack S)
{
    return (TOP(S)=Nil);
}
boolean Alokasi(infotype X)
{
    address P;
    P=malloc(sizeof(ElmtStack));
    if(P!=Nil)
    {
        Info(P)=X;
        Next(P)=Nil;
    }
    else
    {
        P=Nil;
    }
    return P;
}
void Dealokasi(infotype P)
{
    free(P);
}
void Push(Stack *S, infotype X)
{
    address P;
    Alokasi(X);
    if(P!=Nil)
    {
        Next(P)=TOP(*S);
        TOP(*S)=P;
    }
}
void Pop(Stack *S, infotype *X)
{
    address P;
    P=TOP(*S);
    *X=InfoTop(*S);
    TOP(*S)=Next(P);
    Next(P)=Nil;
    Dealokasi(P);
}
void PrintStack(Stack S)
{
    address P;
    P=TOP(S);
    while (P!=Nil)
    {
        printf("| %d |",Info(P));
        P=Next(P);
    }
}
