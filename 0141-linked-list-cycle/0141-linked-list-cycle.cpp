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
    bool hasCycle(ListNode *head) {
        ListNode*right=head;
        while(right!=nullptr && right->next!=nullptr){
            head=head->next;
            right=right->next->next;
            if(head==right){
                return true;
            }
        }
        return false;
    }
};