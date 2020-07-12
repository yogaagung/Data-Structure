#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#define true 1
#define false 0
#define boolean unsigned char

#define Nil NULL

typedef int infotype;
typedef struct ElmtList *address;

typedef struct ElmtList;
{
    infotype Info;
    address Next;
}ElmtList;

typedef struct
{
    address First;
}List;

#define Next(P) (P)->Next
#define Info(P) (P)->Info
#define First (L) (L).First

void CreateList(List *L);
boolean IsEmpty(List L);
address Alokasi(infotype X);
void InsertFirst(List *L, address P);
void InsVFirst(List *L, infotype X);
void PrintInfo(List L);

#endif // HEADER_H_INCLUDED
