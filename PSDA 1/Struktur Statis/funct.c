#include "stack.h"

void createempty (Stack *St)
{
    //TOP(*St) = nil;
    (*St).TOP=nil;
}

boolean isempty (Stack St)
{

    return (TOP(St) == nil);
}

boolean isfull (Stack St)
{
    return (TOP(St) == idxmax);
}

void push (Stack *St ,int x)
{

    TOP(*St)++;
    InfoTop(*St) = x;
}

void pop (Stack *St , int *x)
{
    *x = InfoTop(*St);
    TOP(*St)--;
}

boolean isoperator (char c)
{
    return ((c=='*')||(c=='+')||(c=='-')||(c=='/')||(c=='^'));
}

boolean isnumber (int x)
{
    if (isalpha(x))
    {
        return false;
    }
    else
    {
        return true;
    }
}
