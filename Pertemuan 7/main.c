#include "header.h"

int main()
{
    List L;
    infotype X;
    CreateEmpty(&L);
    InsVFirst(&L,1);
    InsVFirst(&L,2);
    InsVFirst(&L,3);
    PrintInfo(L);
    printf("=========\n");
    DelFirst(&L,&X);
    PrintInfo(L);
    return 0;
}
