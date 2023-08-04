class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
       
        // Loop through the array 'nums'.
        for (int i = 0; i < nums.size(); i++) {
// Calculate the complement of the current number required to reach the 'target'.
            int complement = target - nums[i];
            
     // Check if the value is preaent or not
            if (mp.find(complement) != mp.end()) {
// If complement is found, return the indices of the pair whose sum equals the target.
         // mp[complement] gives the index of the complement.
 // i represents the current index of the loop, which is the second index of the pair.
                return {mp[complement], i};
            }
            
            // If the complement does not exist in the map, add the current number to the map.
            // Store the index of the current number as the value in the map.
            mp[nums[i]] = i;
        }
        
        // If no such pair is found during the loop, return {-1, -1}.
        return {-1, -1};
    }
};




