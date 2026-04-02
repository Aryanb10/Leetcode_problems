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
int carry=0;
ListNode* add(ListNode* l1, ListNode* l2){
    if(!l1 && !l2 && carry==0) return nullptr;
    int v1=(l1 ? l1->val : 0);
    int v2=(l2 ? l2->val : 0);
    int sum = v1+v2+carry;

    carry=sum/10;
    int nodevalue=sum%10;

    ListNode* nextnode= add((l1 ? l1->next : nullptr), (l2 ? l2->next : nullptr));

    return new ListNode(nodevalue, nextnode);
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    carry=0;
    return add(l1,l2); 
    }
};