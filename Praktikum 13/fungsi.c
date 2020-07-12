#include"header.h"

void CreateEmpty(BinTree *P)
{
    *P=Nil;
}

address Alokasi(infotype X)
{
    address P;
    P=malloc(sizeof(tNode));
    if(P!=Nil)
    {
        INFO(P)=X;
        RIGHT(P)=Nil;
        LEFT(P)=Nil;
    }
    return P;
}

address IsEmpty(BinTree P)
{
    return(P==Nil);
}

void InsertNode(BinTree *P, int X)
{
    if(IsEmpty(*P))
    {
        *P=Alokasi(X);
    }
    else
    {
        if(X<=INFO(P))
        {
            InsertNode(LEFT(*P),X);
        }
        else
        {
            InsertNode(RIGHT(*P),X);
        }
    }
}

void PrintInOrder(BinTree P)
{
    if(IsEmpty(P))
    {
        printf(" ");
    }
    else
    {
        PrintInOrder(LEFT(P));
        printf(" %d, ", INFO(P));
        PrintInOrder(RIGHT(P));
    }
}
