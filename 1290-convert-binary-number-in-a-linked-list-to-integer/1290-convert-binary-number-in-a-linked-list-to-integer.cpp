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
    int getDecimalValue(ListNode* head) {
        int pos=0;
        ListNode* temp = head;
        while(temp!=NULL){
            pos++;
            temp=temp->next;
        }
        int i= pos-1;
        int ans=0;
        ListNode* t = head;
        while(t!=NULL){
           ans += t->val * (int)pow(2, i);
           i--;
            t=t->next;
        }
        return ans;

    }
};