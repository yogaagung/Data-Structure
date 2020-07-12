#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct{
int Jam;
int Hari;
int Bulan;
}Waktu;

typedef struct{
int Harga;
char Nm_film[30];
char Nm_Pengunjung[30];
Waktu playing;
}Isi;

typedef Element *Address;
typedef struct Element{
Isi Info;
Address Next;
}Element;

typedef struct{
Address First;
Address Last;
int NbElmet;
int MaxElmet;
}List;

#define Info(P) (P)->Info
#define Next(P) (P)->NEXT
#define First(L) (L).First
#define Last(L) (L).Last

void CreateList (List *L);
boolean IsEmpty (List L);
address Alokasi (int X);
void Dealokasi (Address P);

boolean SearchElmt (Address P);
address SearchAdd (List L,int X);

void ShowData (List L);

void InsVLast (List *L,int X);
void InsLast (List *L,Address P);
void InsVFirst (List *L,int X);
void InsFirst (List *L,Address P);
void InsAfter (List *L,int X,int DATA);
void DelAfter (Address P,Address Prec)
void DelVFirst (List *L,int *X);
void DelVLast (List *L,int *X);

void ShowData (List L);

#endif // HEAD_H_INCLUDED
