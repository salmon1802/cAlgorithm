#include <malloc.h>
#include <stddef.h>

/**
*Created by salmon on 2021-9-15 22:32.
**/



  struct ListNode {
      int val;
      struct ListNode *next;
  };



struct ListNode* removeElements(struct ListNode* head, int val){
    struct  ListNode* res = malloc(sizeof(struct ListNode));
    res -> next = head;//虚拟一个空的头结点出来
    struct ListNode* p = res;//拷贝res，用p进行遍历，保证无论如何删除使res的下一个就是头结点，如果不拷贝res而是使用head返回，那么如果删除第一个元素就会出现问题
//    while (p) { 这里如果不是下面这样写的话，会出现访问空指针空间的异常
        while (p->next != NULL) {
        if(p -> next -> val == val) {
           p->next = p->next->next;
        } else {
            p = p -> next;
        }
    }
    return res->next;
}