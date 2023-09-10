


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
        ListNode* newnode ;
        ListNode* head;
        newnode = head = new ListNode(-1);
        if(l1 == NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        int carry =0;
        while(l1 || l2 || carry){
            int total =0;
            // agar l1 hai ti value store karo nahi ti 0
            if(l1!=NULL){
                total += l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL){
                total += l2->val;
                l2 = l2->next;
            }


             total += carry;
             carry = total/10;
             total = total%10;

            ListNode* node = new ListNode(total);
            newnode->next = node;
            newnode = newnode->next;

           


        }
        return head->next;
        
    }
};
