#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char
#define Nil NULL

typedef int infotype;
typedef struct ElmtList *address;
typedef struct ElmtList {
    infotype Info;
    address Next;
}ElmtList;
typedef struct {
    address First;
}List;

#define Info(P) (P)->Info
#define Next(P) (P)->Next
#define First(L) (L).First

void CreateEmpty(List *L);
boolean IsEmpty(List L);
address Alokasi(infotype X);
void InsertFirst(List *L, address P);
void InsVFirst(List *L, infotype X);
void PrintInfo(List L);
void DelFirst(List *L, infotype *X);


#endif // HEADER_H_INCLUDED
