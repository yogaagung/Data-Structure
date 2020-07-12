#include"header.h"

int main()
{
    BinTree P;
    CreateEmpty(&P);
    InsertNode(&P, 11);
    InsertNode(&P, 12);
    InsertNode(&P, 13);
    InsertNode(&P, 14);
    InsertNode(&P, 15);

    printf("\n InOrder : "); PrintInOrder(P);
    printf("\n PreOrder : "); PrintInOrder(P);
    printf("\n PostOrder : "); PrintInOrder(P);
    return 0;
}
