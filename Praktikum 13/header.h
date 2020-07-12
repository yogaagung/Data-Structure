#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

#define Nil NULL
#define INFO(P) (P)->Info
#define LEFT(P) (P)->Left
#define RIGHT(P) (P)->Right
typedef int infotype;
typedef struct tNode *address;
typedef struct tNode
{
    infotype Info;
    address Left;
    address Right;
}tNode;

typedef address BinTree;

void CreateEmpty(BinTree *P);
address Alokasi(infotype X);
address IsEmpty(BinTree P);
void InsertNode(BinTree *P, int X);
void PrintInOrder(BinTree P);

#endif // HEADER_H_INCLUDED
