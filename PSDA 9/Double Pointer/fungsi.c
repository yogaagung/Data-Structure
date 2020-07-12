#include "header.h"
address P;

boolean ListEmpty(List L)
{
    return (First(L) == Nil);
}

void CreateList(List *L)
{
    First(*L) = Nil;
    LAST(*L) = Nil;
}

address Alokasi(infotype X)
{
    P = (address)malloc(sizeof(ElmtList));
    Info(P) = X;
    Next(P) = Nil;
    Prev(P) = Nil;
    return P;
}

void Dealokasi(address *P)
{
    free(*P);
}

boolean FSearch(List L, address P)
{
    boolean cari = false;
    address P1;

    P1 = First(L);
    while(1) {
        if(P1==P) {
            cari = true;
            break;
        }
        else {
            if(Next(P1)==First(L))
                break;
            else
                P1 = Next(P1);
        }
    }
    return cari;
}

boolean NSearch(address P)
{
    boolean FIND = false;
    if (P == Nil)
    {

        FIND = false;
    }
    else
    {
        FIND = true;
    }
    return FIND;
}

address Search(List L, infotype X)
{
    P = First(L);

    while (P != Nil)
    {
        if (Info(P) == X)
        {
            break;
        }
        else
            P = Next(P);
    }
    return P;
}

void InsertFirst(List *L, address P)
{
    if (ListEmpty(*L))
    {
        First(*L) = P;
        LAST(*L) = P;
        Next(P) = Nil;
        Prev(P) = Nil;
    }
    else
    {
        Next(P) = First(*L);
        Prev(First(*L)) = P;
        Prev(P) = Nil;
        First(*L) = P;
    }
}

void InsertAfter(List *L, address P, address Prec)
{
    Next(P) = Next(Prec);
    Next(Prec) = P;
}

void InsertLast(List *L, address P)
{
    address Prec;
    if (ListEmpty(*L))
    {
        InsertFirst(L,P);
    }
    else
    {
        Next(LAST(*L)) = P;
        Prev(P) = LAST(*L);
        LAST(*L) = P;
    }
}

void DelFirst(List *L, address *P)
{
    if(Next(First(*L)) == Nil)
    {
             First(*L) = Nil;
    }
    else
    {
        *P = First(*L);
        First(*L) = Next(*P);
        Prev(First(*L)) = Nil;
        Next(*P) = Nil;
    }
}

void DelAfter(List *L, address *Pdel, address Prec)
{
    *Pdel = Next(Prec);
    Next(Prec) = Next(Next(Prec));
    Next(*Pdel) = Nil;
}

void DelLast(List *L, address *P)
{

    if(Next(First(*L)) == Nil)
    {
        *P = First(*L);
        First(*L) = Nil;
    }
    else
    {
        *P = LAST(*L);
        LAST(*L) = Prev(LAST(*L));
        Next(LAST(*L)) = Nil;
    }
}

void InsVFirst(List *L, infotype X)
{
    P = Alokasi(X);
    if(P!=Nil)
    {
        InsertFirst(&(*L),P);
    }
}

void InsVLast(List *L, infotype X)
{
    P = Alokasi(X);
    if(P!=Nil)
    {
        InsertLast(&(*L),P);
    }
}

void DelVFirst(List *L, infotype *X)
{
    if (ListEmpty(*L))
    {
        puts("Data sudah kosong.!");
    }
    else
    {
        P = First(*L);
    *X = Info(P);
    DelFirst(&(*L),&P);
    Dealokasi(&P);
    }

}

void DelVLast(List *L, infotype *X)
{
    if (ListEmpty(*L))
    {
        puts("Data sudah kosong.!");
    }
    else
    {
        DelLast(&(*L),&P);
    *X = Info(P);
    Dealokasi(&P);

    }

}

void PrintInfo(List L)
{
    if (ListEmpty(L))
        printf("List Kosong\n");
    else
    {
        P = First(L);
        while(P != Nil)
        {
            printf("|%d| ",Info(P));
            P = Next(P);
        }
    }
}
