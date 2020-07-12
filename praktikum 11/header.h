#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char
#define Nil NULL

typedef int infotype;
typedef struct ElmtQueue *address;
typedef struct ElmtQueue
{
    infotype Info;
    int Prio;
    address Next;
}ElmtQueue;

typedef struct
{
    address Head;
    address Tail;
}Queue;

#define Head(Q) (Q).Head
#define Tail(Q) (Q).Tail
#define Info(P) (P)->Info
#define Prio(P) (P)->Prio
#define Next(P) (P)->Next

void CreateEmpty(Queue *Q);
address Alokasi(infotype X);
address Dealokasi(infotype P);
boolean IsEmpty(Queue Q);
void AddQueue(Queue *Q, infotype X, int pri);
void InsertAfter(address P, address A);
void DelQueue(Queue *Q, infotype *X);
void PrintInfo(Queue Q);


#endif // HEADER_H_INCLUDED
