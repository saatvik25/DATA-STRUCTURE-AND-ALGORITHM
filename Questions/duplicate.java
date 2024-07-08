// 287. Find the Duplicate Number
// Solved
// Medium

// Topics
// Companies
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

 

class Solution {
    public int findDuplicate(int[] nums) {
        Map<Integer,Integer> mp = new HashMap<>();
        int n = nums.length;
        // int count =0;
        int ans =0;
        for(int i=0;i<n;i++){
            if(mp.containsKey(nums[i])){
                ans = nums[i];
                break;
            }
            else {
                mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
            }
        }
       return ans;
    }
}
