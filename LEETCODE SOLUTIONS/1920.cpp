


class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        int num=0;
        for(int i=0;i<nums.size();i++){
            num = nums[nums[i]];
            ans.push_back(num);

        }
        return ans;
    }
};
