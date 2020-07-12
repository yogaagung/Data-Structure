#include "header.h"

int main()
{
    Stack S;
    CreateEmpty(&S);

    Push(&S,2);
    Push(&S,3);
    Push(&S,4);
    Push(&S,5);
    PrintStack(S);
    printf("\nPOP\n");
    Pop(&S,2);
    PrintStack(S);
    return 0;
}
