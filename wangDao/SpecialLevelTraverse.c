/**
*Created by salmon on 2021-9-29 22:50.
**/
#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};
void SpecialLevelTraversebt(BinTree BT){ //即与正常的层次遍历算法的输出反着来
    if(BT == NULL) return;
    Queue Q = initQueue();
    Stack S = initStack();
    EnQueue(BT);
    while ( !isEmpty(Q) ) {
        BinTree temp = DeQueue();
        Push(temp);
        if(temp->Left){
            EnQueue(temp->Left);
        }
        if(temp->Right){
            EnQueue(temp->Right);
        }
    }

    while ( !isEmpty(S) ){
        BinTree res = Pop(S);
        visit(res->Data);
    }
}