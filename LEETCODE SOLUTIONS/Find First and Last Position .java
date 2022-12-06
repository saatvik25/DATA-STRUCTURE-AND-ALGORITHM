//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/


class Solution {
   
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
