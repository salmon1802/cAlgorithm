/**
*Created by salmon on 2021-10-3 23:48.
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

void SearchAncestorOfX(BiTree T, ElementType X){
    InitStack(S);
    BiTree p = T; //p为遍历指针
    BiTree record = NULL; //record为辅组指针，指向最近访问过的结点。

    while(p || !StackIsEmpty(S)) {
        if(p) {
            push(S, p);
            p = p->lchild; //左孩子不空，一直向左走
        } else { //向右
            GetTop(S,p); //读栈顶结点（非出栈）
            if(p->data == X) {//如果栈顶结点的值等于x
                pop(S,P);//先把当前结点pop了，因为只需要打印所有祖先

                while(!StackIsEmpty(S)) {//将剩下的祖先依次打印
                    pop(S, p);
                    visit(p); //访问该结点
                }
                return 0; //执行完毕返回
            }

            if(p->rchild && p->rchild != record) {//若右子树存在，且未被访问过
                p = p->rchild; //转向右
                push(S, p);
                p = p->lchild; //再走到最左
            } else {//否则，弹出结点
                pop(S, p);
                record = p; //记录最近访问过的结点
                p = NULL; //结点访问完毕后，重置p指针，不然该结点又会重新入栈
            }
        }
    }
}