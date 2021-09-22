///**
//*Created by salmon on 2021-9-16 22:07.
//**/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#define ERROR NULL
//typedef int ElementType;
//typedef struct LNode *PtrToLNode;
//struct LNode {
//    ElementType Data;
//    PtrToLNode Next;
//};
//typedef PtrToLNode Position;
//typedef PtrToLNode List;
//
//Position Find( List L, ElementType X );
//List Insert( List L, ElementType X, Position P );
//List Delete( List L, Position P );
//
//int main()
//{
//    List L;
//    ElementType X;
//    Position P, tmp;
//    int N;
//
//    L = NULL;
//    scanf("%d", &N);
//    while ( N-- ) {
//        scanf("%d", &X);
//        L = Insert(L, X, L);
//        if ( L==ERROR ) printf("Wrong Answer\n");
//    }
//    scanf("%d", &N);
//    while ( N-- ) {
//        scanf("%d", &X);
//        P = Find(L, X);
//        if ( P == ERROR )
//            printf("Finding Error: %d is not in.\n", X);
//        else {
//            L = Delete(L, P);
//            printf("%d is found and deleted.\n", X);
//            if ( L==ERROR )
//                printf("Wrong Answer or Empty List.\n");
//        }
//    }
//    L = Insert(L, X, NULL);
//    if ( L==ERROR ) printf("Wrong Answer\n");
//    else
//        printf("%d is inserted as the last element.\n", X);
//    P = (Position)malloc(sizeof(struct LNode));
//    tmp = Insert(L, X, P);
//    if ( tmp!=ERROR ) printf("Wrong Answer\n");
//    tmp = Delete(L, P);
//    if ( tmp!=ERROR ) printf("Wrong Answer\n");
//    for ( P=L; P; P = P->Next ) printf("%d ", P->Data);
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//Position Find( List L, ElementType X ){//返回线性表中首次出现X的位置。若找不到则返回ERROR；
//    Position res = L;
//    while (L) {
//        if(L->Data == X){
//            return res;
//        } else {
//            L = L->Next;
//            res = res->Next;
//        }
//    }
//    return ERROR;
//}
//List Insert( List L, ElementType X, Position P ){ //将X插入在位置P指向的结点之前，返回链表的表头。如果参数P指向非法位置，
//                                                    // 则打印“Wrong Position for Insertion”，返回ERROR；
//    if(P < 0) {
//        printf("Wrong Position for Insertion\n");
//        return ERROR;
//    }
//    struct LNode *head = malloc(sizeof(struct LNode));
//    head->Next = L;
//    struct LNode *p = head;
//    Position x = (Position)malloc(sizeof(struct LNode));
//    x->Data = X;
//    while (p) {
//        if(p->Next == P){//P为没有加入一个虚拟的头结点的第一个结点下标 也可以这么想i指向-1，p指向0; 但使i=0时i总是在p前面一个位置
//            struct LNode *temp = p->Next;
//            p->Next = x;
//            x->Next = temp;
//            return head->Next;
//        } else {
//            p = p->Next;
//        }
//    }
//    printf("Wrong Position for Insertion\n");
//    return ERROR;
//}
//List Delete( List L, Position P ){ //将位置P的元素删除并返回链表的表头。若参数P指向非法位置，
//                                    // 则打印“Wrong Position for Deletion”并返回ERROR
//    if(P < 0) {
//        printf("Wrong Position for Deletion\n");
//        return ERROR;
//    }
//    struct LNode *head = malloc(sizeof(struct LNode));
//    head->Next = L;
//    struct LNode *p = head;
//    while (p) {
//        if (p->Next == P) {
//           p->Next = p->Next->Next;
//           return head->Next;
//        } else {
//            p = p->Next;
//        }
//    }
//    printf("Wrong Position for Deletion\n");
//    return ERROR;
//
//}