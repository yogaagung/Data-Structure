#include"header.h"

void CreateEmpty(Queue *Q)
{
    Head(*Q)=Nil;
    Tail(*Q)=Nil;
}

address Alokasi(infotype X)
{
    address P;
    P=malloc(sizeof(ElmtQueue));
    if(P!=Nil)
    {
        Info(P)=X;
        Next(P)=Nil;
    }
    return P;
}

address Dealokasi(infotype P)
{
    free(P);
}

boolean IsEmpty(Queue Q)
{
    return ((Head(Q)==Nil && Tail(Q)==Nil));
}

void AddQueue(Queue *Q, infotype X, int pri)
{
    address P;
    P=Alokasi(X);
    Prio(P)=pri;
    if(IsEmpty(*Q))
    {
        Head(*Q)=P;
        Tail(*Q)=P;
    }
    else
    {
        if(Prio(P)>Prio(Head(*Q)))
        {
            Next(*Q)=Head(*Q);
            Head(*Q)=P;
        }
        else if(Prio(P)<Prio(Tail(*Q)))
        {
            Next(Tail(*Q))=P;
            Tail(*Q)=P;
        }
        else
        {
            address H,prec;
            H=Head(*Q);
            while(Prio(H)>Prio(P))
            {
                prec=P;
                H=Next(P);
            }
            InsertAfter(P,prec);
        }
    }
}

void InsertAfter(address P, address A)
{
    Next(P)=Next(A);
    Next(A)=P;
}

void DelQueue(Queue *Q, infotype *X)
{
    address P;
    if(Next(Head(*Q))==Nil)
    {
        P=Head(*Q);
        *X=Info(P);
        Head(*Q)=Nil;
        Tail(*Q)=Nil;
    }
    else
    {
        P=Head(*Q);
        *X=Info(P);
        Head(*Q)=Next(Head(*Q));
    }
}

void PrintInfo(Queue Q)
{

}
