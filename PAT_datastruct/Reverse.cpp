/* 
Created by salmon on 2021-9-13 23:09.
 单链表逆转
*/

typedef struct Node *PtrToNode;
struct Node {
    ElementType Data; /* 存储结点数据 */
    PtrToNode   Next; /* 指向下一个结点的指针 */
};
typedef PtrToNode List; /* 定义单链表类型 */


#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表 */

List Reverse( List L );

int main()
{
    List L1, L2;
    L1 = Read();
    L2 = Reverse(L1);
    Print(L1);
    Print(L2);
    return 0;
}

/* 你的代码将被嵌在这里 */

List Reverse( List L ){
    if(L==NULL || L->Next==NULL)
        return L;

    //需要三个指针，顺序为L,P1,P2
    //L指向L的头结点，并且为了实现目的将其孤立
    //p1指向L的下一个，p2指向p1的下一个，所以必定是p2先指向NULL
    List p1 = L->Next;
    L->Next = NULL;
    List p2 = p1->Next;
    while (p2) {
        //调转指针next方向
        p1->Next = L;
        //第一个指针后移一位
        L = p1;
        //第二个指针后移一位
        p1 = p2;
        第三个指针后移一位
        p2 = p2->Next;
    }
    //处理到这里时面临一种情况：L在倒数第二个节点，P1在倒数第一个结点，P2在空结点上
    //此时最后的P1结点没有处理，应该讲P1的next也逆转
    p1->Next = L;
    return p1;
}