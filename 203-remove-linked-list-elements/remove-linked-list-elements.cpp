class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

       
        while (head != NULL && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        if (head == NULL)
            return NULL;

        ListNode* curr = head;

        while (curr->next != NULL) {

            if (curr->next->val == val) {
                ListNode* temp = curr->next;
                curr->next = temp->next;
                delete temp;
            }
            else {
                curr = curr->next;
            }
        }

        return head;
    }
};