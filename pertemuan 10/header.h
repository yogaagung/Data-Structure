#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

# define Nil NULL

typedef int infotype;
typedef struct tElmtlist *address;
typedef struct tElmtlist
{
    infotype info;
    address Next;
} ElmtList;

typedef address List;
address First;


#define Info(P) (P)->Info
#define Next(P) (P)->Next

void CreateList(List *L, infotype X);
int Tail(List L);
int FirstElmt(List L);
int LastElmt(List L);
int Head(List L);
int CopyList(List L);
int Reverse(List L);
void PrintList(List L);



#endif // HEADER_H_INCLUDED
