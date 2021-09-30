///**
//*Created by salmon on 2021-9-23 22:41.
//**/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int ElementType;
//typedef struct TNode *Position;
//typedef Position BinTree;
//struct TNode{
//    ElementType Data;
//    BinTree Left;
//    BinTree Right;
//};
//
//void PreorderTraversal( BinTree BT ); /* 先序遍历，由裁判实现，细节不表 */
//void InorderTraversal( BinTree BT );  /* 中序遍历，由裁判实现，细节不表 */
//
//BinTree Insert( BinTree BST, ElementType X );
//BinTree Delete( BinTree BST, ElementType X );
//Position Find( BinTree BST, ElementType X );
//Position FindMin( BinTree BST );
//Position FindMax( BinTree BST );
//
//int main()
//{
//    BinTree BST, MinP, MaxP, Tmp;
//    ElementType X;
//    int N, i;
//
//    BST = NULL;
//    scanf("%d", &N);
//    for ( i=0; i<N; i++ ) {
//        scanf("%d", &X);
//        BST = Insert(BST, X);
//    }
//    printf("Preorder:"); PreorderTraversal(BST); printf("\n");
//    MinP = FindMin(BST);
//    MaxP = FindMax(BST);
//    scanf("%d", &N);
//    for( i=0; i<N; i++ ) {
//        scanf("%d", &X);
//        Tmp = Find(BST, X);
//        if (Tmp == NULL) printf("%d is not found\n", X);
//        else {
//            printf("%d is found\n", Tmp->Data);
//            if (Tmp==MinP) printf("%d is the smallest key\n", Tmp->Data);
//            if (Tmp==MaxP) printf("%d is the largest key\n", Tmp->Data);
//        }
//    }
//    scanf("%d", &N);
//    for( i=0; i<N; i++ ) {
//        scanf("%d", &X);
//        BST = Delete(BST, X);
//    }
//    printf("Inorder:"); InorderTraversal(BST); printf("\n");
//
//    return 0;
//}
///* 你的代码将被嵌在这里 */
//BinTree Insert( BinTree BST, ElementType X ){
//    if (!BST) { //当递归到正确位置时创造结点
//        BST = (BinTree) malloc(sizeof(struct TNode));
//        BST->Right = NULL;
//        BST->Left = NULL;
//        BST->Data = X;
//    }
//    if(BST->Data > X) BST->Left = Insert(BST->Left,X); //根据二叉搜索树的特性，小了往左，大了往右，一直到叶节点为止
//    if(BST->Data < X) BST->Right = Insert(BST->Right,X);
//    return BST;
//}
///**
// * 二叉搜索树的删除有三种情况：
// *                  1.被删除节点为叶子结点，此时什么都不用做，直接删除
// *                  2.被删除节点只有左结点或右结点，用子结点代替即可
// *                  3.被删除节点有两个孩子，那么我们使用它的后继(或前驱)结点替换它，并且删除前驱结点
// * @param BST
// * @param X
// * @return
// */
//BinTree Delete( BinTree BST, ElementType X ){
//
//    if(!BST){
//        printf("Not Found\n");
//        return BST;
//    }
//    if(BST->Data < X) BST->Right = Delete(BST->Right,X);
//    if(BST->Data > X) BST->Left = Delete(BST->Left,X);
//    if(BST->Data == X){
//        if(BST->Left == NULL || BST->Right == NULL){
//            BST = BST->Left == NULL ? BST->Right : BST->Left;
//        } else {
//            Position temp = FindMin(BST->Right);
//            BST->Data = temp->Data; //注意只是把内容替换，务必不要整个替换节点
//            BST->Right = Delete(BST->Right,BST->Data);//删除结点
//        }
//    }
//    return BST;
//
//}
//Position Find( BinTree BST, ElementType X ){
//    if(!BST) return NULL;
//    if(BST->Data == X) return BST;
//    else if(BST->Data > X) return Find(BST->Left,X);
//    else return Find(BST->Right,X);
//}
//Position FindMin( BinTree BST ){
//    if(!BST) return NULL;
//    if (BST->Left) {
//       return FindMin(BST->Left);
//    }
//    return BST;
//}
//Position FindMax( BinTree BST ){
//    if(!BST) return NULL;
//    if (BST->Right) {
//        return FindMax(BST->Right);
//    }
//    return BST;
//}