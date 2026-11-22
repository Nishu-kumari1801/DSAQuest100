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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode * temp = head ;
        vector<int>arr;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i+k<=arr.size();i+=k){
            int left = i;
            int right = i+k-1;
            while(left<right){
                swap(arr[left++],arr[right--]);
            }
        }
        temp=head;
        for(int i=0;i<arr.size();i++){
            temp->val=arr[i];
            temp=temp->next;

        }
        return head;
    }
};