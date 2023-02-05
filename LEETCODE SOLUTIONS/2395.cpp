


class Solution {
public:
// do it by using map
    bool findSubarrays(vector<int>& nums) {
        map<int,int>mp;
        int sum=0;
        for(int i=0;i<nums.size()-1;i++){
            sum = nums[i]+nums[i+1];
            // insert sum in map and increment by 1
            mp[sum]++;
        }
        for(auto i:mp){
            if(i.second>1)
                return true;  
        }
        return false;
    }
};
