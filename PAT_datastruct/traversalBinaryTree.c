///**
//*Created by salmon on 2021-9-21 23:55.
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
//void InorderTraversal( BinTree BT );
//void PreorderTraversal( BinTree BT );
//void PostorderTraversal( BinTree BT );
//void LevelorderTraversal( BinTree BT );
//
//int main()
//{
//    BinTree BT = CreatBinTree();
//    printf("Inorder:");    InorderTraversal(BT);    printf("\n");
//    printf("Preorder:");   PreorderTraversal(BT);   printf("\n");
//    printf("Postorder:");  PostorderTraversal(BT);  printf("\n");
//    printf("Levelorder:"); LevelorderTraversal(BT); printf("\n");
//    return 0;
//}
///* 你的代码将被嵌在这里 */
////void InorderTraversal( BinTree BT ){//中序
////    if (BT) {
////        InorderTraversal(BT->Left);
////        printf(" %c",BT->Data);
////        InorderTraversal(BT->Right);
////    }
////}
////void PreorderTraversal( BinTree BT ){
////    if (BT) {
////        printf(" %c",BT->Data);
////        PreorderTraversal(BT->Left);
////        PreorderTraversal(BT->Right);
////    }
////}
////void PostorderTraversal( BinTree BT ){
////    if (BT) {
////        PostorderTraversal(BT->Left);
////        PostorderTraversal(BT->Right);
////        printf(" %c",BT->Data);
////    }
////}
////void LevelorderTraversal( BinTree BT ){//层次遍历
////    if (BT == NULL) return;
////    BinTree Queque[999];
////
////    //初始化队列
////    Queque[0] = BT;
////    int front = 0, rear = 1;
////
////    while (front < rear) {
////        if (Queque[front]->Left != NULL) {
////            Queque[rear] = Queque[front]->Left;
////            rear++;
////        }
////        if(Queque[front]->Right != NULL) {
////            Queque[rear] = Queque[front]->Right;
////            rear++;
////        }
////        printf(" %c",Queque[front]->Data);
////        front++;
////    }
////}
//
//BinTree assistStack[999];
//int assistTop = -1;
//void assistPush( BinTree BT ){
//    if(assistTop >= 999) return;
//    assistTop++;
//    assistStack[assistTop] = BT;
//}
//
//BinTree assistPop(){
//    if(assistTop <= -1) return NULL;
//    return assistStack[assistTop--];
//}
//
//int assistStackIsEmpty(){
//    if(assistTop <= -1) return -1; //-1为空
//    else return 1;           //1为不空
//}
//
//
//BinTree Stack[999];
//int top = -1;
//void push( BinTree BT ){
//    if(top >= 999) return;
//    top++;
//    Stack[top] = BT;
//}
//
//BinTree pop(){
//    if(top <= -1) return NULL;
//    return Stack[top--];
//}
//
//int stackIsEmpty(){
//    if(top <= -1) return -1; //-1为空
//    else return 1;           //1为不空
//}
//
//void InorderTraversal( BinTree BT ){//中序
//    while (BT != NULL || stackIsEmpty() == 1) {
//        while (BT != NULL) {
//            push(BT);
//            BT = BT->Left;
//        }
//        if (stackIsEmpty() == 1) {
//            BT = pop();
//            printf(" %c",BT->Data);
//            BT = BT->Right;
//        }
//    }
//}
//void PreorderTraversal( BinTree BT ){
//    if(BT == NULL) return;
//    push(BT);
//    while (stackIsEmpty() == 1) {
//        BT = pop();
//        printf(" %c",BT->Data);
//        if(BT->Right != NULL){
//            push(BT->Right);
//        }
//        if(BT->Left != NULL){
//            push(BT->Left);
//        }
//    }
//}
//void PostorderTraversal( BinTree BT ){
//    while (BT != NULL || assistStackIsEmpty() == 1) {
//        while (BT != NULL) {
//            assistPush(BT);
//            push(BT);
//            BT = BT->Right;
//        }
//        if(assistStackIsEmpty() == 1){
//            BT = assistPop();
//            BT = BT->Left;
//        }
//    }
//    while (stackIsEmpty() == 1) {
//        BinTree res = pop();
//        printf(" %c",res->Data);
//    }
//}
//void LevelorderTraversal( BinTree BT ){//层次遍历
//    if (BT == NULL) return;
//    BinTree Queque[999];
//
//    //初始化队列
//    Queque[0] = BT;
//    int front = 0, rear = 1;
//
//    while (front < rear) {
//        if (Queque[front]->Left != NULL) {
//            Queque[rear] = Queque[front]->Left;
//            rear++;
//        }
//        if(Queque[front]->Right != NULL) {
//            Queque[rear] = Queque[front]->Right;
//            rear++;
//        }
//        printf(" %c",Queque[front]->Data);
//        front++;
//    }
//}