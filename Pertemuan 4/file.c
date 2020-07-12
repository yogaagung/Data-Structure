#include "header.h"

void CreateList (List *L)
{
    First(*L)=Nil;
}
boolean ListEmpty(List L)
{
    return(First(L)==Nil);
}
boolean MemFull()
{
    return(FirstAvail==Nil);
}
void IniTabel()
{
    address P;
    for(P=IndexMin;P<IndexMax;P++)
    {
        Next(P)=p+1;
    }
    Next(IndexMax)=Nil;
    FirstAvail=IndexMin;
}
void AllocTab(address *P)
{
    if(MemFull())
    {
        *P=Nil;
        printf("Tabel Penuh");
    }
    else
    {
        (*P)=FirstAvail;
        FirstAvail=NEXT(FirstAvail);
    }
}
void InsertFirst(List *L, address P)
{
    if(ListEmpty(L))
    {
        NEXT(P)=Nil;
        First(*L)=P;
    }
    NEXT(P)=First(*L);

}
void InsertVFirst(List *L, InfoType X)
{
    address P;
    AllocTab(&P);
    if(P!=Nil)
    {

    }
}
