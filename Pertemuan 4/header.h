#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#define true 1
#define false 0
#define boolean unsigned char

#define IndexMin 1
#define IndexMax 100
#define Nil NULL

typedef int InfoType;
typedef int address;

typedef struct tElmtList
{
    InfoType INFO;
    address NEXT;
}ElmtList;

typedef struct
{
    address FIRST;
}List;

ElmtList TabElmt[IndexMax+1];
address FirstAvail;
List L;

#define FIRST(L) (L).FIRST
#define NEXT(P) TabElmt[P].NEXT
#define INFO(P) TabElmt[P].INFO

void CreateList (List *L);
boolean ListEmpty(List L);
boolean MemFull();
void IniTabel();
void AllocTab(address *P);
void InsertFirst(List *L, address P);
void InsertVFirst(List *L, InfoType X);


#endif // HEADER_H_INCLUDED
