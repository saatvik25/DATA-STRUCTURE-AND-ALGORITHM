


class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* slow = head;
        ListNode* fast =head;
        // pehle k decree hoga matlab k ==2 hai to 1 bar chalega loop
        while(--k){
            fast = fast->next;
        }
        ListNode* first = fast;

        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;

        }
        int temp = first->val;
        first->val = slow->val;
        slow->val = temp;
        return head;
    }
};
