#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#define Nil 0
#define MaxEl 10

typedef int infotype;
typedef int address;

typedef struct
{
    infotype T[MaxEl+1];
    address TOP;
}Stack;

#define TOP(S) (S).TOP
#define infoTop(S) (S).T[(S).TOP]

void CreateEmpty (Stack *S);
void Push (Stack *S,infotype X);
void PrintStack(Stack S);
void Pop(Stack *S, infotype *X);

#endif // HEADER_H_INCLUDED
