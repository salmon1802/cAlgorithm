#include <stddef.h>

/**
*Created by salmon on 2021-9-16 21:54.
**/

struct ListNode {
    int val;
    struct ListNode *next;
};



struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    struct ListNode* p = head;
    while (p->next != NULL) {
        if(p->next->val == p->val){
            p->next = p->next->next;
        } else {
            p = p->next;
        }
    }
    return head;
}