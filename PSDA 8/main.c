#include "list.h"

void menu ()
{
    puts("\nOption List Linier");
    puts("------ ---- ------");
    puts("A> Input Data List (Awal).");
    puts("B> Input Data List (Akhir).");
    puts("C> Hapus Data Pertama.");
    puts("D> Hapus Data Terakhir.");
    puts("E> Pencarian Data X.");
    puts("F> Insert Setelah Data ke X.");
    puts("G> Kepo sama INFO Last.");
    puts("H> Kepo sama INFO dari Next Last. (sirkuler)");
    puts("Z> Wes Bosen.");
    puts("==================================");
    puts("");
}

int main()
{


    List L;
    int data,data2;
    char select;

    createList(&L);

    puts("\t\tPROGRAM LIST SIRKULER PSDA-08");
    puts("\t\t------- ---- -------- -------\n");
    printf("Apakah List masih kosong? = %s\n",IsEmpty(L)?"TRUE":"FALSE");

    menu();
    printf("Tentukan Takdirmu Sekarang...!! [a-z] = ");fflush(stdin);scanf("%c",&select);
    ////////////////////////////////////////
    while (1)
    {
        if (select=='a')
        {
            printf("Masukan Data-nya kk = ");scanf("%d",&data);
            InsVFirst(&L,data);
            ShowData(L);
            puts("");
        }
        else if (select =='b')
        {
            printf("Masukan Data-nya kk = ");scanf("%d",&data);
            InsVLast(&L,data);
            ShowData(L);
            puts("");
        }
        else if (select=='c')
        {
            if (IsEmpty(L))
            {
                puts("Datanya sudah kosong tuh...!");
            }
            else
            {
                DelVFirst(&L,&data);
                printf("Data yang dihapus adalah = %d\n",data);
                ShowData(L);
                puts("");
            }
        }
        else if (select =='d')
        {
            if (IsEmpty(L))
            {
                puts("Datanya sudah kosong tuh...!");
            }
            else
            {
                DelVLast(&L,&data);
                printf("Data yang dihapus adalah = %d\n",data);
                ShowData(L);
                puts("");
            }

        }
        else if (select=='e')
        {
            printf("Masukan Data yang ingin Dicari = ");scanf("%d",&data);
            printf("%s\n",Search_Elmt(Search_Add(L,data))?"Data Ketemu...!":"Maff Data Tidak Ada...");
            puts("");
        }
        else if (select=='f')
        {
            printf("Silahkan mau diinsert setelah data ke brp? = ");scanf("%d",&data);
            printf("Masukan Datanya = ");scanf("%d",&data2);
            Insert_After(&L,data,data2);
            ShowData(L);
            puts("");
        }
        else if (select=='g')
        {
            if (IsEmpty(L))
            {
                puts("Data masih kosong.!");
            }
            else
            {
                printf("\nNilai dari elemen LAST = %d\n\n",INFO(LAST(L)));
            }
        }
        else if (select=='h')
        {
            if (IsEmpty(L))
            {
                puts("Data masih kosong.!");
            }
            else
            {
                printf("\nNilai dari Next elemen LAST = %d\n\n",INFO(NEXT(LAST(L))));
            }
        }
        else
        {
            puts("\nTerima kasih kk :D");
            break;
        }
        printf("Tentukan Takdirmu Sekarang...!! [a-z] = ");fflush(stdin);scanf("%c",&select);
    }

    return 0;
}
