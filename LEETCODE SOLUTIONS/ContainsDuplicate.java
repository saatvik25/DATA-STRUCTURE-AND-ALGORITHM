//https://leetcode.com/problems/contains-duplicate/


class Solution {
    HashSet<Integer> s = new HashSet<>();
    public boolean containsDuplicate(int[] nums) {
        for(int i =0;i<nums.length;i++){
            if(s.contains(nums[i])){
                return true;
               
            }
            s.add(nums[i]);
            
        }
        return false;
    }
}
