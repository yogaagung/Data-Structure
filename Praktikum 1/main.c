#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    Stack S,X;
    CreateEmpty(&S);

    Push(&S,8);
    Push(&S,10);
    Push(&S,5);
    Push(&S,7);

    PrintStack(S);

    printf("Setelah di POP\n");
    Pop(&S,&X);
    PrintStack(S);


    return 0;
}
