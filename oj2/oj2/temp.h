/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *res = new ListNode(0);
        ListNode *s = res;
        ListNode *p = l1;
        ListNode *q = l2;
        int carry = 0;
        if(!l1 || !l2) return NULL;
        while(p&&q){
            int data = (p->val + q->val + carry);
            ListNode node = new ListNode(data % 10);
            res -> next = &node;
            carry = data / 10;
            res = &node;
            p = p -> next;
            q = q -> next;
        }
        while(p){
            int data = (p->val + carry);
            ListNode node = new ListNode(data % 10);
            res -> next = &node;
            carry = data / 10;
            res = &node;
            p = p -> next;
        }
        while(q){
            int data = (q->val + carry);
            ListNode node = new ListNode(data % 10);
            res -> next = &node;
            carry = data / 10;
            res = &node;
            q = q -> next;
        }
        if(carry == 1){
            ListNode temp = new ListNode(1);
            res -> next = &temp;
            return s->next;
        }
        else    return s->next;
    }
};