


class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool decrease = true;
        bool increase = true;
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i]> nums[i+1]) increase =false;
            if(nums[i]< nums[i+1]) decrease =false;
        }
        if(decrease == false && increase == false){
            return false;
        }
        else{
            return true;
        }
        
    }
};
