#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main()
{
    Stack S;
    creatempety(&S);
    push(&S,5);
    push(&S,6);
    push(&S,7);
    push(&S,8);
    push(&S,9);
    push(&S,2);
    /*push(&S,9);
    push(&S,9);
    push(&S,9);
    push(&S,9);
    push(&S,9);*/

    printStack(S);
   // printf("1. push\n2. pop\n.0. exit")
    return 0;
}
