#include "queue.h"

void CreateEmpty (Queue *Q, int max)
{
    (*Q).T = (int *) malloc((max+1) * sizeof(int));
        HEAD(*Q) = NIL;
        TAIL(*Q) = NIL;
        MaxEl(*Q) = max;
}

boolean IsMax (Queue Q)
{
    return (((TAIL(Q)==MaxEl(Q))&&(HEAD(Q)==1)) || (TAIL(Q)+1==HEAD(Q)));
}

boolean IsEmpty (Queue Q)
{
    return ((TAIL(Q)==NIL)&&(HEAD(Q)==NIL));
}

int NbElmt (Queue Q)
{
    return TAIL(Q);
}

void Add (Queue *Q,int val)
{
    if (IsMax(*Q))
    {
        printf("Maaf Queue sudah penuh.!");
    }
    else if ((HEAD(*Q)==TAIL(*Q)) && (TAIL(*Q)==MaxEl(*Q)))
    {
        TAIL(*Q)=1;
        HEAD(*Q)=1;
        InfoTail(*Q) = val;
    }
    else if ((TAIL(*Q)==MaxEl(*Q)) && (HEAD(*Q)!=1))
    {
        TAIL(*Q)=1;
        InfoTail(*Q) = val;
        TAIL(*Q)++;
    }
    else
    {
         if (IsEmpty(*Q))
        {
        HEAD(*Q)=1;
        }
        TAIL(*Q)++;
        InfoTail(*Q) = val;
    }
}

void Del (Queue *Q, int *val)
{
    int i=1;

    if (IsEmpty(*Q))
    {
        printf("Maaf Queue kosong.!\n");
    }
    else if (HEAD(*Q)==TAIL(*Q))
    {
        *val = InfoHead(*Q);
        printf("Terjadi ,Queue semu, masukan data dahulu setelah ini.!\n");
    }
    else if (HEAD(*Q)==MaxEl(*Q))
    {
        *val = InfoHead(*Q);
        HEAD(*Q)=1;
    }
    else
    {
        *val = InfoHead(*Q);
        HEAD(*Q)++;
    }
}

void Dealokasi (Queue *Q)
{
    MaxEl(*Q) = NIL;
    free((*Q).T);
}
