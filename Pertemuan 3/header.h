#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#define true 1
#define false 0
#define boolean unsigned char
#define Nil NULL

typedef int infotype;
typedef struct ElmtList *address;
typedef struct ElmList
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
#define First(L) (L).First

boolean ListEmpty(List L);
void CreateList (List *L);
address Alokasi (infotype X);
void InsertFirst (List *L,address P);
void InsvFirst (List *L,infotype X);
void PrintInfo (List L);

#endif // HEADER_H_INCLUDED
