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
    ListNode* p1 = l1;
    ListNode* p2 = l2;
    ListNode* dummy = new ListNode(); 
    ListNode* ans = dummy;
    int sum = 0, carry = 0;
    while (p1 || p2) {
        sum += carry; 
        if (p1) {
            sum += p1->val;
            p1 = p1->next;
        }
        if (p2) {
            sum += p2->val;
            p2 = p2->next;
        }
        ans->next = new ListNode(sum % 10);
        carry = sum / 10; 
        sum = 0;
        ans = ans->next; 
    }
    if (carry) {
        ans->next = new ListNode(carry); 
    }
    return dummy->next; 
}
};