#include "header.h"

void CreateList(List *L)
{
   First((*L))+Nil;
}
boolean IsEmpty(List L)
{
    return (First(L)==Nil);
}
address Alokasi(infotype X)
{
    address P;
    P=malloc(sizeof(ElmtList));
    if(P!=Nil)
    {
        Info(P)=X;
        Next(P)=Nil;
    }
    return (P);
}
void InsertFirst(List *L, address P)
{
    Next(P)=First(*L);
    First(*L)=P;
}
void InsVFirst(List *L, infotype X)
{
    address P;
    P=Alokasi(X);
    if(P!=Nil)
    {
        InsertFirst()
    }
}
void PrintInfo(List L)
{

}
