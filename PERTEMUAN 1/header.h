#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#define nil 0
#define maxEl 10

typedef int infotype;
typedef int address;

typedef struct
{
    infotype T[maxEl+1];
    address TOP;

}Stack;

#define TOP(S) (S).TOP
#define infotop(S) (S).T[(S).TOP]

void creatempety(Stack *S);
void push(Stack *S,infotype X);
void pop(Stack *S,infotype *X);
void printStack(Stack S);
#endif // HEADER_H_INCLUDED
