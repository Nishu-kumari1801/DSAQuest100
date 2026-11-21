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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=0,l2=0;
        ListNode * temp=headA;
        while(temp){
            l1++;
            temp = temp->next;
        }
        temp=headB;
        while(temp){
            l2++;
            temp = temp->next;
        }
        if(l1>l2){
            int x=l1-l2;
            while(x--){
                headA=headA->next;
            }
        }else{
            int x=l2-l1;
            while(x--) {
                headB=headB->next;
            }
        }
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};