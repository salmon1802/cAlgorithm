/**
*Created by salmon on 2021-9-18 22:13.
**/

#include <stdio.h>
#include <stdlib.h>

#define ERROR 1e8
typedef int ElementType;
typedef enum { push, pop, end } Operation;
typedef enum { false, true } bool;
typedef int Position;
struct SNode {
    ElementType *Data;
    Position Top1, Top2;
    int MaxSize;
};
typedef struct SNode *Stack;

Stack CreateStack( int MaxSize );
bool Push( Stack S, ElementType X, int Tag );
ElementType Pop( Stack S, int Tag );

Operation GetOp();  /* details omitted */
void PrintStack( Stack S, int Tag ); /* details omitted */

int main()
{
    int N, Tag, X;
    Stack S;
    int done = 0;

    scanf("%d", &N);
    S = CreateStack(N);
    while ( !done ) {
        switch( GetOp() ) {
            case push:
                scanf("%d %d", &Tag, &X);
                if (!Push(S, X, Tag)) printf("Stack  %d is Full!\n", Tag);
                break;
                case pop:
                    scanf("%d", &Tag);
                    X = Pop(S, Tag);
                    if ( X==ERROR ) printf("Stack %d is Empty!\n", Tag);
                    break;
                    case end:
                        PrintStack(S, 1);
                        PrintStack(S, 2);
                        done = 1;
                        break;
        }
    }
    return 0;
}

/* 你的代码将被嵌在这里 */
Stack CreateStack( int MaxSize ){//两端各有一个栈
    Stack s = (Stack) malloc(sizeof(struct SNode));
    s->Data = (ElementType *) malloc(sizeof(ElementType)*MaxSize);
    s->MaxSize = MaxSize;
    s->Top1 = -1;
    s->Top2 = MaxSize;
    return s;
}
bool Push( Stack S, ElementType X, int Tag ){//tag表示对哪个栈进行处理
    if (S->Top1 + 1 == S->Top2) {
        printf("Stack Full\n");
        return false;
    }

    if(Tag == 1){
        S->Top1++;
        S->Data[S->Top1] = X;
    } else {
        S->Top2--;
        S->Data[S->Top2] = X;
    }
    return true;

}
ElementType Pop( Stack S, int Tag ){
    if ((S->Top1 == -1 && Tag == 1) || (S->Top2 == S->MaxSize && Tag == 2)) {
        printf("Stack %d Empty\n",Tag);
        return ERROR;
    }

    if(Tag == 1){
        return S->Data[S->Top1--];
    } else {
        return S->Data[S->Top2++];
    }
}