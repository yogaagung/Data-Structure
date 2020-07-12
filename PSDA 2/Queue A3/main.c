#include "queue.h"


// *> Nama     = Yeni Fachrunnisa       //
// *> NIM      = A11.2014.08404         //
// *> Kelompok = A11.4301U              //


int main()
{
    Queue Q;
    int max;
    int nilai;
    int x=1;
    int pilih;
    puts("\t\t--PROGRAM QUEUE DENGAN MEMORY DINAMIS, ALTERNATIF 3--");
    puts("\t\t-----------------------------------------------------\n\n");


    printf("Masukan jumlah elemennya = ");scanf("%d",&max);

    CreateEmpty(&Q,max);

    printf("I.S , Apakah Stack kosong? = (%s)\n\n",IsEmpty(Q)?"TRUE":"FALSE");

    for (;;)
    {
        puts("=============================");
    puts("Input data = 1 ");
    puts("Ambil data = 2");
    puts("Stop = 3");
    printf("Masukan pilihan anda = ");scanf("%d",&pilih);

    if (pilih==1)
    {
        puts("============================");
        printf("masukan data = ");scanf("%d",&nilai);
        Add(&Q,nilai);
        puts("============================");
    }
    else if (pilih==2)
    {
        Del(&Q,&nilai);
        if (IsEmpty(Q)==false)
        {
            printf("> Penghapusan ke %d , dan nilai dari head  = %d\n",x,nilai);
        }
        x++;
    }
    else
    {
        break;
    }
    }


    do
    {
        printf("nilai dari queue = %d\n",Q.T[HEAD(Q)]);
        Q.HEAD++;
    }
    while (HEAD(Q)!=TAIL(Q)+1);

    Dealokasi(&Q);
    printf("Queue telah di Dealokasi");
    printf("niali = %d\n",InfoHead(Q));
    printf("nilai = %d\n",InfoTail(Q));
    return 0;
}
