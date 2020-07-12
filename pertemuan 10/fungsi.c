#include"header.h"


void CreateList(List *L, infotype X)
{
    List Q;
    Q=malloc(sizeof(List));
    Next(Q)=Nil;
    Info(Q)=X;

    if(*L==Nil)
    {
        *L=Q;
    }
    else
    {
        List P=*L;
        while(Next(P)!=Nil)
        {
            P=Next(P);
        }
        Next(P)=Q;
    }
}
int Tail(List L)
{
    List P, Q=L;
    P=malloc(sizeof(List));
    Q=Next(Q);
    Info(P)=Info(Q);
    Next(P)=Next(Q);
    return P;
}
int FirstElmt(List L)
{
    List P;
    P=malloc(sizeof(List));
    Info(P)=Info(L);
    Next(P)=Nil;
    return P;
}
int LastElmt(List L)
{
    List P;
    P=malloc(sizeof(List));
    while(Next(L)!=Nil)
    {
        L=Next(L);
    }
    Info(P)=Info(L);
    Next(P)=Nil;
    return P;
}
int Head(List L)
{
    List Q=CopyList(L);
    return Reverse(Tail(Reverse(Q)));
}
int CopyList(List L)
{
    List P=NULL;
    while(Next(L)!=Nil)
    {
        CreateList(&P,Info(L));
        L=Next(L);
    }
    CreateList(&P, Info(L));
    return P;
}
int Reverse(List L)
{
    if(Next(L)==Nil)
    {
        First=L;
        return;
    }
    Reverse(Next(L));
    Next(Next(L))=L;
    Next(L)=Nil;
    return First;
}
void PrintList(List L)
{
    address P;
    while (P!=Nil)
    {
        printf("| %d |",Info(P));
        P=Next(P);
    }
}
