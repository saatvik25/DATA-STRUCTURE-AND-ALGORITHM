


#include <vector>
using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long sum = 0;
        
        long long maxi = 0;  // Initialize maxi to 0
        unordered_map<int ,int>mp;
        for(int i=0;i<k;i++){
            sum += nums[i];
            mp[nums[i]]++;
        }
        // if all k elements are distinct then stote in maxi
        if(mp.size()==k){
            maxi = sum;
        }
        // then start from k to n and delete i-k and add i
        for(int i=k;i<n;i++){
            sum  = sum - nums[i-k] + nums[i];
            mp[nums[i]]++;
            mp[nums[i-k]]--;
// if frequency is 0 than remove the element
            if(mp[nums[i-k]] == 0){
                mp.erase(nums[i-k]);
            }
            // If the current subarray contains distinct elements and has length 'k',
        // update the result with the maximum of the result and the current sum
            if(mp.size() == k){
                maxi = max(sum , maxi);
            }
        }

        
        return maxi;
    }
};
