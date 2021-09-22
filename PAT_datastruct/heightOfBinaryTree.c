///**
//*Created by salmon on 2021-9-18 22:50.
//**/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef char ElementType;
//typedef struct TNode *Position;
//typedef Position BinTree;
//struct TNode{
//    ElementType Data;
//    BinTree Left;
//    BinTree Right;
//};
//
//BinTree CreatBinTree(); /* 实现细节忽略 */
//int GetHeight( BinTree BT );
//
//int main()
//{
//    BinTree BT = CreatBinTree();
//    printf("%d\n", GetHeight(BT));
//    return 0;
//}
///* 你的代码将被嵌在这里 */
//int GetHeight( BinTree BT ){ //在脑中想象一颗只有2层的满二叉树可以更好地理解
//    int maxLeft = 0,maxRight = 0;
//    if(BT == NULL){ //第一次，一直递归到此树叶子结点的孩子结点时停止，此时该结点为NULL所以高度为0
//        return 0;
//    } else { //以当前BT为根节点判断左子树高度和右子树高度谁更大
//        maxLeft = GetHeight(BT->Left);
//        maxRight = GetHeight(BT->Right);
//        return (maxLeft > maxRight ? maxLeft + 1 : maxRight + 1); //此时已经计算完成一个叶结点，返回结点到它的双亲节点，显然高度要加1
//    }
//}
