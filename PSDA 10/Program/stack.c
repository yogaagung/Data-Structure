#include "stack.h"

void CreateEmpty (Stack *S)
{
    TOP(*S) = NIL;
}
void ALOKASI (address *P , InfoType X)
{
    *P = (address)malloc(sizeof(ElmtList));

    if (*P!=NIL)
    {
        INFO(*P) = X;
        NEXT(*P) = NIL;
    }
}
void DEALOKASI (address P)
{
    free(P);
}

boolean IsEmpty (Stack S)
{
    return (TOP(S)==NIL);
}
boolean IsFull (Stack S)
{

}

void PUSH (Stack *S,InfoType X)
{
    address newP;

    ALOKASI(&newP,X);

    if (newP!=NIL)
    {
        NEXT(newP) = TOP(*S);
        TOP(*S) = newP;
    }

}
void POP (Stack *S,InfoType *X)
{
    address P;

    P = TOP(*S);

    if (IsEmpty(*S))
    {
        puts("Stack kosong tuh ...!");
    }
    else
    {
        *X = INFO(P);
        TOP(*S) = NEXT(TOP(*S));
        NEXT(P) = NIL;

        DEALOKASI(P);
    }

}

void PrintStack (Stack S)
{
    address P;

    P = TOP(S);

    if (IsEmpty(S))
    {
        puts("Stack Kosong tuh , isi dulu sana ...!!");
    }
    else
    {
        while (P!=NIL)
        {
            printf("|  %d  |\n",INFO(P));
            puts("|-----|");
            P = NEXT(P);
        }
    }


}
