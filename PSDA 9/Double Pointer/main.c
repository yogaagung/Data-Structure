#include <stdio.h>
#include <stdlib.h>
#include "header.h"

/* Yoga Agung N
   A11.2015.08964
   A11.4307
*/
int main()
{
    List L;
    int a;
    char pilih;

    CreateList(&L);
    printf("Cek apakah List Kosong? %s\n\n",ListEmpty(L)?"TRUE":"FALSE");
    printf("\nPilih Menu:\n");
    printf("a> Insert First\n");
    printf("b> Insert Last\n");
    printf("c> Delete First\n");
    printf("d> Delete Last\n");
    printf("e> Cari elemen List\n");
    printf("z> Keluar");
    printf("\n\nSilahkan pilih menu : ");
    fflush(stdin);
    scanf("%s",&pilih);

    while (1)
    {
        if (pilih == 'a')
        {
            printf("\n- - - Insert First - - -\n");
            printf("Masukkan elemennya: ");
            scanf("%d",&a);
            InsVFirst(&L,a);
            printf("\nList L: ");
            PrintInfo(L);
            puts("");
        }
        else if (pilih == 'b')
        {
            printf("\n- - - Insert Last - - -\n");
            printf("Masukkan elemennya: ");
            scanf("%d",&a);
            InsVLast(&L,a);
            printf("\nList L: ");
            PrintInfo(L);
            puts("");
        }
        else if (pilih == 'c')
        {
            printf("\n- - - Delete First - - -\n");
            DelVFirst(&L,&a);
            printf("\nData yang dihapus :%d",a);
            printf("\nList L: ");
            PrintInfo(L);
            puts("");
        }
        else if (pilih == 'd')
        {
            printf("\n- - - Delete Last - - -\n");
            DelVLast(&L,&a);
            printf("\nData yang dihapus :%d",a);
            printf("\nList L: ");
            PrintInfo(L);
            puts("");
        }
        else if (pilih == 'e')
        {
            printf("\n- - - Cari elemen list - - -\n");
            printf("\nMasukkan elemen yang ingin dicari: ");
            scanf("%d",&a);
            printf("%s",NSearch(Search(L,a))?"Data Valid":"Data Tidak Valid");
            puts("");
        }
        else
        {
            puts("- - - Terima Kasih - - -");
            break;
        }
        printf("\nSilahkan pilih menu : ");
        fflush(stdin);
        scanf("%s",&pilih);
    }

    return 0;
}
