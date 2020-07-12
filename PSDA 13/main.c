#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    BinTree P=NIL;

    int data;


    printf("masukan datanya = ");scanf("%d",&data);
    P = TREE(data,P);
    printf("masukan datanya = ");scanf("%d",&data);
    P = TREE(data,P);
    printf("masukan datanya = ");scanf("%d",&data);
    P = TREE(data,P);
    printf("masukan datanya = ");scanf("%d",&data);
    P = TREE(data,P);
    printf("masukan datanya = ");scanf("%d",&data);
    P = TREE(data,P);
    printf("masukan datanya = ");scanf("%d",&data);
    P = TREE(data,P);
    printf("masukan datanya = ");scanf("%d",&data);
    P = TREE(data,P);
    PrintPreOrder(P);
    printf("\nApakah benar 15 ? %s\n",path(P,15)?"TRUE":"FALSE");
    printf("Apakah benar 17 ? %s\n",path(P,17)?"TRUE":"FALSE");
    printf("Apakah benar 29 ? %s\n",path(P,29)?"TRUE":"FALSE");



    return 0;
}
