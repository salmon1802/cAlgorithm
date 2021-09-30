///**
//*Created by salmon on 2021-9-17 22:05.
//**/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#define ERROR NULL
//typedef enum {false, true} bool;
//typedef int ElementType;
//typedef struct LNode *PtrToLNode;
//struct LNode {
//    ElementType Data;
//    PtrToLNode Next;
//};
//typedef PtrToLNode Position;
//typedef PtrToLNode List;
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
//    bool flag;
//
//    L = MakeEmpty();
//    scanf("%d", &N);
//    while ( N-- ) {
//        scanf("%d", &X);
//        flag = Insert(L, X, L->Next);
//        if ( flag==false ) printf("Wrong Answer\n");
//    }
//    scanf("%d", &N);
//    while ( N-- ) {
//        scanf("%d", &X);
//        P = Find(L, X);
//        if ( P == ERROR )
//            printf("Finding Error: %d is not in.\n", X);
//        else {
//            flag = Delete(L, P);
//            printf("%d is found and deleted.\n", X);
//            if ( flag==false )
//                printf("Wrong Answer.\n");
//        }
//    }
//    flag = Insert(L, X, NULL);
//    if ( flag==false ) printf("Wrong Answer\n");
//    else
//        printf("%d is inserted as the last element.\n", X);
//    P = (Position)malloc(sizeof(struct LNode));
//    flag = Insert(L, X, P);
//    if ( flag==true ) printf("Wrong Answer\n");
//    flag = Delete(L, P);
//    if ( flag==true ) printf("Wrong Answer\n");
//    for ( P=L->Next; P; P = P->Next ) printf("%d ", P->Data);
//    return 0;
//}
///* 你的代码将被嵌在这里 */
//List MakeEmpty(){//创建并返回一个带头节点的空的线性表；
//    List list = (List)malloc(sizeof(struct LNode));
//    list->Next = NULL;
//    return list;
//}
//Position Find( List L, ElementType X ){// 返回线性表中X的位置。若找不到则返回ERROR；
//    Position p = L;
//    while (p->Next) {//至于这里为什么是p->Next是因为在下方的if中访问了p的下一个节点的内容，如果p的下一个节点为空，会发生段错误
//        if(p->Next->Data == X){
//            return p->Next;
//        } else {
//            p = p->Next;
//        }
//    }
//    return ERROR;
//}
//bool Insert( List L, ElementType X, Position P ){// 将X插入在位置P指向的结点之前，返回true。如果参数P指向非法位置，
//    // 则打印“Wrong Position for Insertion”，返回false；
//    Position p = L;
//    Position x = (Position)malloc(sizeof(struct LNode));
//    x->Data = X;
//    while (p) {
//        if(p->Next == P){
//            p->Next = x;
//            x->Next = P;
//            return true;
//        } else {
//            p = p->Next;
//        }
//    }
//    printf("Wrong Position for Insertion\n");
//    return false;
//}
//bool Delete( List L, Position P ){  // 将位置P的元素删除并返回true。若参数P指向非法位置，
//    // 则打印“Wrong Position for Deletion”并返回false。
//    Position p = L;
//    while (p) {
//        if(p->Next == P){
//            p->Next = p->Next->Next;
//            return true;
//        } else {
//            p = p->Next;
//        }
//    }
//    printf("Wrong Position for Deletion\n");
//    return false;
//}
//
