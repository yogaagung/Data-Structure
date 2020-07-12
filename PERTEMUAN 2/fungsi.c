#include"header.h"
void CreateEmpty(Queue *Q, int maks)
{
    (*Q).T=(infotype*)malloc(maks+1)*sizeof(infotype));
    Head(*Q)=Nil;
    Tail(*Q)=Nil;
    (*Q).MaxEl=maks;

}
void DeAlokasi(Queue *Q)
{
    (*Q).MaxEl=Nil;
    free((*Q).T);
}

boolean IsEmpty (Queue Q)
{
    return ((Tail(Q)==Nil)&&(Head(Q)==Nil));
}

boolean IsFull (Queue Q)
{
    return ((Tail(Q)==MaxEl)&&(Head(Q)==MaxEl));
}




void Add(Queue *Q, infotype X)
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
void Del(Queue *Q, infotype *X)
{
    int i;
    if(IsEmpty(*Q))
    {
        printf("queue kosong !!");
        getch();
    }
    else if(NbElmt(*Q)==1)
    {
        *X=InfoHead(*Q)
        Head(*Q)--;
	Tail(*Q)--;
    }
    else
    {
        InfoHead(*Q)=(*X);
        for(i=1;i<Tail(*Q);i++)
        {
            (*Q).T[i]=(*Q).T[i+1];
        }
	Tail(*Q)--;
    }

}
