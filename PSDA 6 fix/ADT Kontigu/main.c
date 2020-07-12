#include "header.h"



int main()
{
    List L, L1, L2, L3;
    int i, X, N;

    printf("\n\n*** Penambahan Elemen List ***\n\n");
    CreateList(&L);
    printf("Apakah List L kosong? %d\n", ListEmpty(L));
    printf("Insert Last\n\n");
    printf("Berapa banyak elemen yang diinginkan = ");scanf("%d",&N);
    for(i=1;i<=N;i++) {
        printf("Elemen ke %d List: ", i);scanf("%d",&X);
        InsVLast(&L,X);
    }
    printf("List L: ");PrintInfo(L);

    printf("\n\n*** Penghapusan Elemen List ***\n\n");
    printf("\n");
    DelVFirst(&L,&X);
    printf("Setelah Di del first:\n");
    printf("List L: ");PrintInfo(L);
    printf("\n");

    printf("\n\n*** Penambahan Elemen List ***\n\n");
    printf("Insert First\n\n");
    printf("Berapa banyak elemen yang diinginkan? ");scanf("%d",&N);
    for(i=1;i<=N;i++) {
        printf("Elemen ke %d List: ", i);scanf("%d",&X);
        InsVFirst(&L,X);
    }
    printf("List L: ");PrintInfo(L);

    printf("\n\n*** Penghapusan Elemen List ***\n\n");
    printf("\nSetelah di del last\n");
    DelVLast(&L,&X);
    printf("\nList L: ");PrintInfo(L);

    printf("\n\n*** Pencarian Elemen List ***\n\n");
    printf("Cari elemen 2 pada List L: %d\n", Search(L,2));
    printf("Cari address 3 pada list: %d\n", FSearch(L,3));

    printf("\n\n*** Prekondisi Untuk Max/Min/Rata-Rata ***\n\n");
    printf("Jumlah elemen List L: %d\n", NbElmt(L));
    printf("Rata-rata elemen List L: %0.2f\n", Average(L));
    printf("Nilai maksimum elemen List L: %d\n", Max(L));
    printf("Nilai minimum elemen List L: %d\n", Min(L));
    printf("Address maksimum: %d\n", AdrMax(L));
    printf("Address minimum: %d\n", AdrMin(L));

    printf("\n\n*** Proses Terhadap List ***\n\n");
    InversList(&L);
    printf("Invers List L: ");PrintInfo(L);

    CreateList(&L1);
    CopyList(&L,&L1);
    printf("\nCopy List L ke List L1: \n");
    printf("List L: ");PrintInfo(L);
    printf("\nList L1: ");PrintInfo(L1);
    printf("\nList L: ");PrintInfo(L);
    InsVFirst(&L1,4);
    printf("\nList L1: ");PrintInfo(L1);

    CreateList(&L2);
    CreateList(&L3);
    Konkat(L,L1,&L2);
    printf("\nKonkat List L dan List L1\n");
    PrintInfo(L2);
    printf("\n\nSetelah di del all\n");
    DelAll(&L);
    PrintInfo(L);

    return 0;
}
