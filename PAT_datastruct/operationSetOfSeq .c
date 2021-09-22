///**
//*Created by salmon on 2021-9-14 23:32.
//**/
//
///**
//*Created by salmon on 2021-9-14 22:57.
//**/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAXSIZE 7
//#define ERROR -1
//typedef enum {false, true} bool;
//typedef int ElementType;
//typedef int Position;
//typedef struct LNode *List;
//struct LNode {
//    ElementType Data[MAXSIZE];
//    Position Last; /* 保存线性表中最后一个元素的位置 */
//};
//
//List MakeEmpty();
//Position Find( List L, ElementType X );
//bool Insert( List L, ElementType X, Position P );
//bool Delete( List L, Position P );
//
//int main()
//{
//    List L;
//    ElementType X;
//    Position P;
//    int N;
//
//    L = MakeEmpty();
//    scanf("%d", &N);
//    while ( N-- ) {
//        scanf("%d", &X);
//        if ( Insert(L, X, 0)==false )
//            printf(" Insertion Error: %d is not in.\n", X);
//    }
//    scanf("%d", &N);
//    while ( N-- ) {
//        scanf("%d", &X);
//        P = Find(L, X);
//        if ( P == ERROR )
//            printf("Finding Error: %d is not in.\n", X);
//        else
//            printf("%d is at position %d.\n", X, P);
//    }
//    scanf("%d", &N);
//    while ( N-- ) {
//        scanf("%d", &P);
//        if ( Delete(L, P)==false )
//            printf(" Deletion Error.\n");
//        if ( Insert(L, 0, P)==false )
//            printf(" Insertion Error: 0 is not in.\n");
//    }
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//
//List MakeEmpty(){ //创建并返回一个空的线性表
//    List list = (List)malloc(sizeof(struct LNode));
//    list->Last = -1;
//    return list;
//}
//
//Position Find( List L, ElementType X ){ //返回线性表中X的位置。若找不到则返回ERROR；
//    for (int i = 0; i <= L->Last; ++i) {//TODO 这里可能错
//        if(L->Data[i] == X){
//            return i;
//        }
//    }
//    return ERROR;
//}
//
//bool Insert( List L, ElementType X, Position P ){ // 将X插入在位置P并返回true。若空间已满，则打印“FULL”并返回false；如果参数P指向非法位置，则打印“ILLEGAL POSITION”并返回false；
//    if(P < 0 || P > L->Last + 1){ //非法位置,正确：可以插入在[0,当前数组最大值+1]之间
//        printf("ILLEGAL POSITION");
//        return false;
//    }
//    if(L->Last == MAXSIZE - 1){ //顺序表已满
//        printf("FULL");
//        return false;
//    }
//    for (int i = L->Last + 1; i > P ; --i) { //i一直遍历到要插入下标P+1的位置
//        L->Data[i] = L->Data[i - 1];
//    }
//    //当前P位置空缺出来
//    L->Data[P] = X;
//    //更新最后一个结点的下标
//    L->Last++;
//    return true;
//}
//
//bool Delete( List L, Position P ){// 将位置P的元素删除并返回true。若参数P指向非法位置，则打印“POSITION P EMPTY”（其中P是参数值）并返回false。
//    if(P < 0 || P > L->Last){ //非法位置,正确：可以删除在[0,当前数组最大值]之间的任何数
//        printf("POSITION %d EMPTY",P);
//        return false;
//    }
//    for (int i = P; i < L->Last ; ++i) { //i一直遍历到数组倒数第二个元素
//        L->Data[i] = L->Data[i + 1];
//    }
//    L->Data[L->Last] = -1; //去掉最后一个元素
//    L->Last--;
//    return true;
//}
//
