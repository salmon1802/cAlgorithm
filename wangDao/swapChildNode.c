/**
*Created by salmon on 2021-9-29 23:30.
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

/**
 * 要自底向上的交换，递归方法类似于后序遍历
 * @param BT
 */
void swap(BinTree BT){
    if(BT){
        swap(BT->Left);
        swap(BT->Right);
        BinTree temp = BT->Left;
        BT->Left = BT->Right;
        BT->Right = temp;
    }
}