#include "header.h"

boolean ListEmpty(List L)
{
    return (First(L)==Nil);
}
void CreateList (List *L)
{
    First((*L))=Nil;
}
address Alokasi (infotype X)
{
    address P;
    P=malloc(sizeof(ElmList));
    if (P!=Nil)
    {
        Info(P)=X;
        Next(P)=Nil;
    }return P;
}
void InsertFirst (List *L,address P)
{
    Next(P)=First(*L);
    First((*L))=P
}
void InsvFirst (List *L,infotype X)///masukkan elemen yg sudah ada
{
    address P;
    P=Alokasi(X)
    if (P!==Nil)
    {
        InsertFirst(L,P);
    }
}
void PrintInfo (List L)
{
    address P;
    if (ListEmpty(L))
    {
        printf("List kosong");
    }
    else
    {
        P=First(L);
        printf("[");
        do
        {
            if (Next(P)!=Nil)
            {
                printf("%d",Info((P)));
            }
            else
            {
                printf("%d",Info(P))
            }
            P=Next(P);

        }
        while(P!=Nil);
        printf("]");
    }
}
