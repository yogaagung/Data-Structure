#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "stack.h"
#include <ctype.h>

//////////////////////////////////////////
// *> Nama     = Muhammad Adhi Darmawan //
// *> NIM      = A11.2012.06758         //
// *> Kelompok = A11.4301U              //
//////////////////////////////////////////

int main ()
{
    int data;
    int poop;
    int i=1;
    Stack S;

    puts("\t--BAGIAN . 1 , PROGRAM STACK DENGAN ALOKASI MEMORI STATIK--");
    puts("\t-----------------------------------------------------------\n\n");

    createempty(&S);
    printf("I.S , Apakah Stack kosong? = %d\n\n",isempty(S));

    while (isfull(S)==false)
    {
        printf("Masukan data pertama = ");scanf("%d",&data);
        push(&S,data);
    }
    puts("\nStack sudah terisi penuh");
    puts("==========================\n");

    while (TOP(S)!=nil)
    {
        pop(&S,&poop);
        printf("Nilai dari pop ke-%d = %d\n",i,poop);
        i++;
    }

    printf("\nF.S , Apakah Stack kosong? = %d\n\n",isempty(S));
    return 0;
}

