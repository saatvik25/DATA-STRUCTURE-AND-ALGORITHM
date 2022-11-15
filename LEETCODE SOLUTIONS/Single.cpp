


class Solution {
    public int singleNumber(int[] nums) {
       HashMap<Integer,Integer> mp = new HashMap<>();
        int c =0;
        // int freq = 1;
        for(int i =0;i< nums.length;i++){
            
            mp.put(nums[i], mp.getOrDefault(nums[i],0)+1);
            // if(mp.containsKey(nums[i])){
            //     int freq = mp.get(nums[i]);
            //     freq++;
            //     mp.put(nums[i],freq);
            // }
            // else{
            //     mp.put(nums[i],1);
            // }
//             int a = (mp.get(nums[i]));
            
//             if(a == 1){
//                 c=nums[i];
            }
        for(int i =0;i<nums.length;i++){
             int a = (mp.get(nums[i]));
            
            if(a == 1){
                c=nums[i];
        }
        }
        return c;
        
    }
}
