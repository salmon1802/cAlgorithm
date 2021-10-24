/**
*Created by salmon on 2021-10-24 23:24.
**/

#include <stdio.h>
#include <stdlib.h>
//带头结点链表，将小于第一个元素的结点放在其前面，大于放在后面
typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType data;
    PtrToNode   next;
};
typedef PtrToNode List;

void change( List L ){
    if(L -> next == NULL)	return;

    List p, end, first, pre;//end是末尾指针
    first = L -> next;	    //first指向L单链表的第一个元素
    p = first -> next;  	//p指向遍历当前结点
    pre = first;            //pre指向p的前一个结点

    while ( p ) {	//遍历单链表
        end = p->next;
        if(p -> data < first -> data){	//遇到比第一个元素小的则头插法插入
            pre->next = end;
            p->next = L->next;
            L->next = p;
            p = end;
        } else {	//其他则继续往后遍历
            p = p->next;
            pre = pre->next;
        }
    }
}