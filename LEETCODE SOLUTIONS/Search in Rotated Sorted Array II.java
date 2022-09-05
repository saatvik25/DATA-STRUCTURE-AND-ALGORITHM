


class Solution {
    public boolean search(int[] nums, int target) {
        boolean flag = false;
        for(int i=0;i< nums.length;i++){
            if(nums[i] ==target){
                flag = true;
                break;
            }
        }
        return flag;
    }
}
