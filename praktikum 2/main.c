#include <stdio.h>
#include <stdlib.h>
#include "header.h"


int main()
{
    Queue Q;
    CreateEmpty(&Q,8);
    Add(&Q,6);
    Add(&Q,7);
    Add(&Q,8);
    Add(&Q,9);
    PrintQueque(Q);
    return 0;
}
