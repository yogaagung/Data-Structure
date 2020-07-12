#include "stack.h"

void menu()
{
    puts("\t\t\tPSDA 10 STACK DENGAN REPRESENTASI LIST LINIER");
    puts("\t\t\t---- -- ----- ------ ------------ ---- ------\n\n");
    puts("");
    puts("------OPTION------");
    puts("> A). PUSH.");
    puts("> B). POP.");
    puts("> C). Keluar.");
    puts("========================\n");
}

int main()
{
    Stack S;
    int data;
    char choice;

    CreateEmpty(&S);
    printf("Apakah Stack masih kosong ? = %s",IsEmpty(S)?"TRUE":"FALSE");
    puts("\n");


    while (1)
    {
        menu();
        puts("Kondisi stack = ");PrintStack(S);
        printf("\nTentukan Pilihan anda = ");fflush(stdin);scanf("%c",&choice);

        switch (choice)
        {
            case 'a' :
                           printf("Masukan Data = ");scanf("%d",&data);
                           PUSH(&S,data);
                           break;
            case 'b' :
                           POP(&S,&data);
                           printf("Data yang dihapus = %d\n",data);
                           break;
            case 'c' : goto end_loop;break;
        }
        system("cls");
    }



    end_loop:
    puts("\nTerima kasih atas kunjungannya ^_^ ...~\n");
    return 0;
}
