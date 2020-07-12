#include "header.h"

void CreateEmpty(Queue *Q, int Max)
{
    /// Alokasi Memori Queque
    (*Q).T=(infotype*)malloc((Max+1)*sizeof(int));
    MaxEl(Q)=Max;
    Head(*Q)=Nil;
    Tail(*Q)=Nil;
}

boolean isEmpty(Queue Q)
{
    return ((Head(Q)==Nil)&&(Tail(Q)==Nil));
}

boolean IsFull(Queue Q)
{
    return ((Head(Q)==1)&&(Tail(Q)==MaxEl(Q)));
}

int Add(Queue *Q, infotype X)
{
    {
    if(IsFull(*Q))
    {
        printf("queue penuh !!");
        getch();
    }
    else if(IsEmpty(*Q))
    {
        Head(*Q)++;
        Tail(*Q)++;
        InfoTail(*Q)=X;
    }
    else
    {
        Tail(*Q)++
        InfoTail(*Q)=X;
    }
    }
}

void PrintQueque(Queue Q)
{
    int i=Head(Q);
    while(i<=Tail(Q))
    {
        printf("|%d|",Q.T[i]);
        i++;
    }
}
