#include "head.h"

boolean IsEmpty (List L){
    return (First(L)==NULL);
}
void createList (List *L){
    First(*L)=Last(*L)=NULL;
}

Address Alokasi(int X){
Address P = (Address)malloc(sizeof(ElmtList));
    if (P!=NULL){
        Info(P)=X;
        Next(P) = NULL;
    }
    return P;
}

void Dealokasi (Address P){
    free(P);
}

boolean Search_Elmt (Address P){
if(P==NULL) return 0;
else return 1;
}

Address Search_Add (List L,int X){
    Address P = First(L);
    do{
        if (Info(P)==X)
        {
            return P;
        }
        P = Next(P);
    }while (P!=First(L));
    return NULL;
}
void InsVLast (List *L,int X){
    Address P = Alokasi(X);
    if (P!=NULL) Last(L,P);
}

void InsLast (List *L,Address P){
    if (IsEmpty(*L)){
        Last(*L) = P;
        InsFirst(L,P);
    }
    else
    {
        Last(*L) = Next(Last(*L)) = P;
        Next(P) = First(*L);
    }
}

void InsVFirst (List *L,int X){
    Address P = Alokasi(X);
    if (P!=NULL){
        if (IsEmpty(*L))
            Last(*L) = P;

        InsFirst(L,P);
    }
}

void InsFirst (List *L,Address P){
    Next(P) = First(*L);
    First(*L) = P;
    Next(Last(*L)) = First(*L);
}

void InsAfter (List *L,int X,int DATA){
    Address P = Search_Add(*L,X);
    if (IsEmpty(*L))
        InsVFirst(L,DATA);
    else if (Last(*L)==First(*L))
        InsVLast(L,DATA);
    else{
        Address N = Alokasi(DATA);
        Next(N) = Next(P);
        Next(P) = N;
    }
}

void DelAfter (Address P,Address Prec){
    Next(Prec)=Next(P);
}

void DelVFirst (List *L,int *X){
    Address P;

    if (Next(First(*L))==First(*L))
    {
        *X = Info(First(*L));
        First(*L) = NULL;
        Dealokasi(First(*L));
    }
    else
    {
        P = First(*L);
        *X = Info(P);

        First(*L) = Next(First(*L));
        Next(Last(*L)) = First(*L);

        Next(P) = NULL;
        Dealokasi(P);
    }
}
void DelVLast (List *L,int *X){
    Address P,prev_Last;

    if (Next(First(*L))==First(*L))
    {
        *X = Info(First(*L));
        First(*L) = NULL;
        Dealokasi(First(*L));
    }
    else
    {
        *X = Info(Last(*L));

        prev_Last = Last(*L);
        P = First(*L);

        while (Next(P)!=Last(*L))
        {
            P = Next(P);
        }

        Last(*L) = P;
        Next(Last(*L)) = First(*L);

        Next(prev_Last) = NULL;
        Dealokasi(prev_Last);
    }
}

void ShowData (List L){
    Address P;

    if (IsEmpty(L))
    {
        printf("Datanya Kosong...!\n");
    }
    else
    {
        P = First(L);
        puts("=============Data===============");
        printf("[");
        do
        {
            if (Next(P)!=First(L))
            {
                printf("%d -> ",Info(P));
            }
            else
            {
                printf("%d",Info(P));
            }
            P = Next(P);
        }while (P!=First(L));
        puts("]");
        puts("=============Data===============");

    }
}
