/**
*Created by salmon on 2021-10-1 00:23.
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

void delete(BinTree BT){
    if(BT){ //删除该树时应从底部开始删除，类似于后序遍历
        delete(BT->Left);
        delete(BT->Right);
        free(BT);
    }
}

/**
 * 比较方便的思路是层次遍历整棵树，如果找到X则删除它以及以它为根节点的子树
 * @param BT
 * @param X
 */
void searchAndDelete(BinTree BT,ElementType X){
    if(BT == NULL) return;
    if(BT->Data == X) return delete(BT);

    Queue Q = initQueue();
    EnQueue(BT);
    while ( !isEmpty(Q) ){
        BinTree temp = DeQueue(Q);
        if(temp->Left){
            if(temp->Left->Data == X){ //查找时，我们让指针停留在父节点，用父节点的左右孩子来进行对比，这样有利于删除操作。
                delete(temp->Left);
                temp->Left = NULL;
            } else {
                EnQueue(temp->Left);
            }
        }
        if(temp->Right){
            if(temp->Right->Data == X){
                delete(temp->Right);
                temp->Right = NULL;
            } else {
                EnQueue(temp->Right);
            }
        }
    }
}