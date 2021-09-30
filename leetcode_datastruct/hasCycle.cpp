///**
//*Created by salmon on 2021-9-14 22:25.
//**/
//
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     struct ListNode *next;
// * };
// */
//bool hasCycle(struct ListNode *head) {
//    if(head == NULL){ //若为空必定没有环
//        return false;
//    }
//
//    struct ListNode* fast = head -> next;
//    struct ListNode* slow = head;
//    //快慢指针，快的比慢的快一个位置
//    //如果快的追上慢的就表明有环
//    while (slow != fast) {
//        if(fast == NULL || fast -> next == NULL){
//            //因为fast一次移动两个元素，所以fast至少指向该链表倒数第二个节点
//            //否则会发生空指针访问空指针域的问题
//            return false;
//        }
//        fast = fast -> next -> next;
//        slow = slow -> next;
//    }
//    return true;
//}