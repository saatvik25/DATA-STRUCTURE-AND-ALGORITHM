


class Solution {
    public ListNode mergeTwoLists(ListNode List1, ListNode List2) {
                ListNode   ans = new ListNode();
             ListNode temp = ans;
        while(List1 != null && List2 != null){
            if(List1.val < List2.val){
                temp.next = List1;
                    List1 = List1.next;
            }
            else{
                temp.next = List2;
                List2 = List2.next;
            }
            temp = temp.next;
        }
         if(List1 == null){
            temp.next = List2;
        }
        else if(List2==null){
            temp.next =List1;
        }
        return ans.next;
    }
}
