#include "header.h"

boolean ListEmpty(List L)
{
    return((First(L)==Nil) && (Last(L)==Nil));
}

void CreateList(List *L)
{
    First(*L)=Nil;
    Last(*L)=Nil;
}

boolean Alokasi (infotype X)
{
    address P;
    P=(address)malloc(sizeof(ElmtList));
    if(P!=Nil)
    {
        Info(P)=X;
        Next(P)=Nil;
        Prev(P)=Nil;
    }
}

void Dealokasi(address *P)
{
    free(*P);
}
void InsertFirst(List *L, address P)
{
    Next(P)=First(*L);
    if(ListEmpty(*L))
    {
        Last(*L)=P;
    }
    else
    {
        Prev(First(*L))=P;
    }
    First(*L)=P;
}

void DeleteFirst(List *L, address *P)
{
    *P=First(*L);
    if(First(L)==Last(*L))
    {
        Last(*L)=Nil;
    }
    First(*L)=Next(First(*L));
    if(First(*L)!=Nil)
    {
        Prev(First(*L))==Nil;
    }
}

void PrintInfo(List L)
{
    address P;
    P=First(L);
    if(ListEmpty(L))
    {
        printf("List Kosong !");
    }
    else
    {
        do
        {
            printf("| %d |",Info(P));
            P=Next(P);
        }
        while(P!=Nil)
    }
}
