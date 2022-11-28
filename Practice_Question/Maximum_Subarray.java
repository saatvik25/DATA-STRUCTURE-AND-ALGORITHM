//https://leetcode.com/problems/maximum-subarray/




lass Solution {
    public int maxSubArray(int[] arr) {
        int maxsum = arr[0];
      int  currsum = maxsum;
        for(int i=1;i<arr.length;i++){
            currsum = Math.max(arr[i],arr[i]+currsum);
        maxsum = Math.max(maxsum,currsum);
        }
        return maxsum;
    }
   
}
