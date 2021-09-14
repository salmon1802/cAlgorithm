/* 
Created by salmon on 2021-9-14 21:27.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode head;
    struct ListNode* res = &head;
    while (l1 != NULL && l2 != NULL) { //l2小于等于l1时插入l2，否则插入l1; 每次插入后指针后移一位；
        if(l2 -> val <= l1 -> val){
            res -> next = l2;
            l2 = l2 -> next;
        } else {
            res -> next = l1;
            l1 = l1 -> next;
        }
        res = res -> next;
    }
    //此时循环结束，必定至少有一个链表被循环到最后一个节点之后的空指针上
    if(l1 == NULL){
        res -> next = l2;
    } else if (l2 == NULL){
        res -> next = l1;
    }


    //返回头指针
    //不能返回head->next,因为head不是指针是一个struct类型的变量
    return head.next;
}