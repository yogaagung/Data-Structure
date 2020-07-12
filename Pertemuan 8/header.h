#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
#define boolean unsigned char
#define Nil NULL

typedef int infotype;
typedef struct tElmtList *address;
typedef struct tElmtList
{
    infotype Info;
    address Next;
    address Prev;
}ElmtList;

typedef struct
{
    address First;
    address Last;
}List;

List L;
address P;

#define Prev(P) P->Prev
#define Next(P) P->Next
#define Info(P) P->Info
#define First(L) (L).First
#define Last(L) (L).Last

boolean ListEmpty(List L);
void CreateList(List *L);
boolean Alokasi (infotype X);
void Dealokasi(address *P);
void InsertFirst(List *L, address P);
void DeleteFirst(List *L, address *P);
void PrintInfo(List L);

#endif // HEADER_H_INCLUDED
