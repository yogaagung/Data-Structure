#include "queue.h"


// *> Nama     = Yeni Fachrunnisa       //
// *> NIM      = A11.2014.08404         //
// *> Kelompok = A11.4301U              //


int main()
{
    Queue Q;
    int max;
    int nilai;
    int x;

    puts("\t\t----PROGRAM QUEUE DENGAN MEMORY DINAMIS, ALTERNATIF 1");
    puts("\t\t-----------------------------------------------------\n\n");


    printf("Masukan jumlah elemennya = ");scanf("%d",&max);

    CreateEmpty(&Q,max);

    printf("I.S , Apakah Stack kosong? = %d\n\n",IsEmpty(Q));

    while (IsMax(Q)==false)
    {
        printf("masukan data = ");scanf("%d",&nilai);
        Add(&Q,nilai);
    }

    printf("\nPosisi dari Head = %d\n",HEAD(Q));
    printf("Posisi dari TAIL = %d\n\n",TAIL(Q));

    printf("Stack sudah penuh ? = %d\n\n",IsMax(Q));

    x=1;
    puts("=====================================================");
    while (IsEmpty(Q)==false)
    {
        Del(&Q,&nilai);
        printf("> Penghapusan ke %d , dan nilai dari head  = %d\n",x,nilai);
        x++;
    }
    puts("=====================================================");
    printf("\nApakah Queue kosong? %d\n",IsEmpty(Q));

    Dealokasi(&Q);
    printf("Queue telah di Dealokasi");
    return 0;
}
