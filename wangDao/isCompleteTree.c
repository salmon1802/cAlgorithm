/**
*Created by salmon on 2021-9-29 23:12.
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
 * 具体思路为，进行普通的层序遍历，唯一不同的是即使当前结点为叶子结点，我们依旧把左右孩子入队列，
 * 当遍历到空节点时，说明已经遍历到第一个叶子结点的孩子结点，那么从这里开始队列中的剩余结点均为空结点，
 * 所以如果剩余结点有不为空的结点，那么就不是完全二叉树
 * @param BT
 * @return
 */
bool isCompleteTree(BinTree BT){
    if(!BT) return true; //如果树为空，是完全二叉树
    Queue Q = InitQueue();
    EnQueue(BT);
    while ( !isEmpty(Q) ){
        BinTree BT = DeQueue(Q);
        if(BT){
            EnQueue(BT->Left);
            EnQueue(BT->Right);
        } else {
            while ( !isEmpty(Q) ){
                BinTree BT = DeQueue(Q);
                if(BT) return false;
            }
            return true;
        }
    }
}