#ifndef LISTREKURSIF_H_INCLUDED
#define LISTREKURSIF_H_INCLUDED

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
    address next;
} ElmtList;

typedef address List;


#define Info(P) (P)->info
#define Next(P) (P)->next
#define Prec(n) (n-1)


address Alokasi (infotype X);

void Dealokasi (address P);

int IsEmpty (List L);

int IsOneElmt (List L);

infotype FirstElmt (List L);

List Tail (List L);

List LastElmt(List L);

List Head(List L);

List Konso (List L, infotype e);

List KonsB(List L, infotype e);
void PrintList(List L);
int NbElmt(List L);
List CopyList(List L);
boolean IsMember(infotype X, List L);
List Inverse(List L);
boolean IsEqual(List L1, List L2);
List Konkat(List L1, List L2);
int ElmtKeN(int N, List L);
boolean IsFirst(List L, infotype X);
boolean IsLast(List L, infotype X);
boolean IsNbElmtN(List L, int N);
boolean IsInverse(List L1, List L2);
boolean IsXElmtKeN(infotype X, int N, List L);
int max2(int a, int b);
int MaxList(List L);
int Dimensi(List L);
List ListPlus(List L1, List L2);
List Insert(List L, infotype X);
List Insort(List L);
int HitungX(List L, infotype X);
int MaxNb(List L);
void print_reverse (List L);

#endif // LISTREKURSIF_H_INCLUDED
