#include "header.h"

int main()
{
    List L;
    CreateEmpty(&L);
    InsVFirst(&L,1);
    InsVFirst(&L,2);
    InsVFirst(&L,3);
    InsVFirst(&L,4);
    InsVFirst(&L,5);
    PrintList(L);
    return 0;
}
