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
    ListNode* reverseList(ListNode* head) {
        ListNode* ans = new ListNode();
        ListNode* curr = head;
        while(curr!=nullptr){
            ListNode* next = curr->next;
            curr->next = ans->next;
            ans->next = curr;
            curr = next;
        }
        return ans->next;
    }
};