///**
//*Created by salmon on 2021-9-23 22:22.
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
//void PreorderPrintLeaves( BinTree BT );
//
//int main()
//{
//    BinTree BT = CreatBinTree();
//    printf("Leaf nodes are:");
//    PreorderPrintLeaves(BT);
//    printf("\n");
//
//    return 0;
//}
///* 你的代码将被嵌在这里 */
//void PreorderPrintLeaves( BinTree BT ){
//    if(!BT) return;
//    if(BT->Left == NULL && BT->Right == NULL){
//        printf(" %c",BT->Data);
//        return;
//    }
//    if(BT->Left != NULL){
//        return PreorderPrintLeaves(BT->Left);
//    }
//    if(BT->Right != NULL){
//        return PreorderPrintLeaves(BT->Right);
//    }
//}