


class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head ==NULL ||head->next ==NULL || head->next->next ==NULL){
            // note
            return head;
        }
        ListNode* odd = head,*even = head->next,*evenhead = even;
        
        while(even != NULL && even->next != NULL ){

            odd->next = even->next;
            odd= odd->next;
            even->next = odd->next;
            even = even->next;
        }
        odd->next = evenhead;
        return head;

    }
};
