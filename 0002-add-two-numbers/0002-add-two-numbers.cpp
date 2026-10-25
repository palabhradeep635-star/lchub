/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        struct ListNode* t1=l1;
        struct ListNode* t2=l2;
        ListNode dummy(0);
        ListNode* t3 = &dummy;
        int carry=0;
        while (t1 != NULL || t2 != NULL || carry != 0){
        int add = carry;
        if (t1 != NULL) add += t1->val;
        if (t2 != NULL) add += t2->val;
            if(add>9){
                add= add-10;
                carry=1;
            }else {
    carry = 0;
}
            t3->next=new ListNode(add);
            t3=t3->next;
            if (t1 != NULL) t1 = t1->next;
if (t2 != NULL) t2 = t2->next;
        }
        return dummy.next;
    }
};