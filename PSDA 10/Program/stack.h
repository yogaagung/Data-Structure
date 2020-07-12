#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include "boolean.h"
#include <stdio.h>
#include <stdlib.h>

#define INFO(P) (P)->INFO
#define NEXT(P) (P)->NEXT
#define TOP(L) (L).TOP
#define NIL NULL

typedef int InfoType;
typedef struct tElmtList *address;

typedef struct tElmtList
{
    InfoType INFO;
    address NEXT;
}ElmtList;

typedef struct
{
    address TOP;
}Stack;

//=============FUNGSI DAN PROCEDURE================

void CreateEmpty (Stack *S);
void ALOKASI (address *P , InfoType X);
void DEALOKASI (address P);

boolean IsEmpty (Stack S);
boolean IsFull (Stack S);

void PUSH (Stack *S,InfoType X);
void POP (Stack *S,InfoType *X);

void PrintStack (Stack S);
#endif // STACK_H_INCLUDED
