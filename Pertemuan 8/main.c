#include "header.h"

int main()
{
    int N,i,X;
    CreateList(&L);
    printf("Inser First\n");
    printf("Berapa list yang ingin dimasukkan ?"); scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
        printf("Elemen ke %d list : ",i); scanf("%d",&X);
        P=Alokasi(X);
        InsertFirst(&L,P);
    }
    printf("List : "); PrintInfo(L);
    printf("\nDelet First : ");
    DeleteFirst(&L,&P);
    printf("List setelah di Delet First "); PrintInfo(L);
    return 0;
}
