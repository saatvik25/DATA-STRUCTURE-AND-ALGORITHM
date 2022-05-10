


class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if(head==null || head.next==null){
            return head;
        }
        ListNode hnext = head.next;
        if(head.val == hnext.val){
            while(hnext!=null && head.val==hnext.val)
                hnext = hnext.next;
                    return deleteDuplicates(hnext);
            
        } else
        head.next = deleteDuplicates(hnext);
            return head;
    }
}
