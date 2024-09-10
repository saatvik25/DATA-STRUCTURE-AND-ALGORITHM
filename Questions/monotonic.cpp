class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool in =false;
        bool de = false;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                in = true;
            }
            if(nums[i]>nums[i+1]){
                de = true;
            }

        }
        // if both increase and decrease than false
        if(in == true && de == true ){
            return false;
        }
        return true;
    }
};
