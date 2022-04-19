//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/


class Solution {
    public int[] searchRange(int[] nums, int target){
            
                int start = 0;
        int end = nums.length-1;
        int result[] = new int[2];
        result[0]=bsleft(nums,target);
        result[1]=bsright(nums,target);
        return result;
 }
     int bsleft(int nums[], int target){
         int start =0;
        int end = nums.length-1;
        int result = -1;
        while(start<=end){
          int   mid = start +(end-start)/2;
            if(target<nums[mid]){
                end = mid-1;
            }
            else if(target>nums[mid]){
                start = mid+1;
            }
            else if(target == nums[mid]){
            result=  mid;
            end = mid-1;
            }
    }
        return result;
}
    
    
     int bsright(int nums[], int target){
         int start =0;
        int end = nums.length-1;
        int result = -1;
        while(start<=end){
          int   mid = start +(end-start)/2;
           if(target<nums[mid]){
                end = mid-1;
            }
            else if(target>nums[mid]){
                start = mid+1;
            }
            else if(target == nums[mid]){
            result=  mid;
            start = mid+1;
            }
    }
        return result;
}
    
    
    
    
}
