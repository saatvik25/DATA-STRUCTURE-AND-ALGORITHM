class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL , *curr = head, *temp;
        while(curr != NULL){
            temp = curr->next;

            curr->next = prev;
            
            prev = curr;
            curr = temp;

        }
        return prev;




    }





        
};
