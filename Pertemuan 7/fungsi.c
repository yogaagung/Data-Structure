#include"header.h"

void CreateEmpty(List *L)
{
    First(*L)=Nil;
}
boolean IsEmpty(List L)
{
    return(First(L)==Nil);
}
address Alokasi(infotype X)
{
    address P;
    P = malloc(sizeof(ElmtList));
    if(P!=Nil)
    {
        Info(P)=X;
        Next(P)=Nil;
    }
}
void InsertFirst(List *L, address P)
{
    address Last;
    if(IsEmpty(*L))
    {
        First(*L)=P;
        Next(P)=First(*L);
    }
    else
    {
        Last=First(*L);
        while(Next(Last)!=First(*L));
        {
            Last=Next(Last);
        }
        Next(P)=First(*L);
        First(*L)=P;
        Next(Last)=First(*L);
    }
}
void InsVFirst(List *L, infotype X)
{
    address P;
    P=Alokasi(P);
    if(P!=Nil)
    {
        InsertFirst(&(*L),P);
    }
}
void PrintInfo(List L)
{
    address P;
    P=First(L);
    do
    {
        printf("%d",Info(P));
        P=Next(P);
    }
    while(P!=First(L));
}

void DelFirst(List *L, infotype *X)
{
    address P;
    P=First(*L);
    if(IsEmpty(*L))
    {
        printf("List Sudah KOsong\n");
    }
    else if(Next(P)==First(*L))
    {
        *X=Info(P);
        First(*L)=Nil;
    }
    else
    {
        Last=First(*L);
        while(Next(Last)!=)
        Next(First(*L))=First(*L);
        Next(Last)=First(*L);
        First(*L)=P;
        *X=Info(P);
        Next(P)=Nil;
    }
}
