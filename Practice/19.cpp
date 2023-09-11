


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l =0;
        ListNode* temp =head;
        while(temp !=NULL){
            temp= temp->next;
            l++;

        }
        if(l==n){
            return head->next;
        }
        ListNode* p = head;
        for(int i=0;i<l-n-1;i++){
            p = p->next;
            // n se ek pehle
        }
        ListNode* node = p->next;
        p->next = p->next->next;
        delete node;
        return head;

    }
};
