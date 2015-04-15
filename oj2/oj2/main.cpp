#include <iostream> 
using namespace::std;
// * Definition for singly-linked list.
  typedef struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
  }ListNode;

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *res = l1;
        ListNode *p = l1;
        ListNode *q = l2;
        ListNode *pre = p;
        int carry = 0;
        if(!l1 || !l2) return nullptr ;
        while(p&&q){
            p->val = (p->val + q->val + carry) % 10;
            carry = (p->val + q->val + carry) / 10;//one clear mistake
            pre = p;
            p = p -> next;
            q = q -> next;
        }
        if(carry == 1){
            ListNode *temp;//
            temp->val = 1;
            temp->next = nullptr;
            pre -> next = temp;
            return res;
        }
        else    return res;
    }
int main(){
    ListNode a = ListNode(5);
    ListNode b = ListNode(3);
    ListNode *c = addTwoNumbers(&a , &b);
    cout << (*c).val << endl;
}