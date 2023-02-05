


class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum =0;
        int c=0;
        for(int i=0;i<nums.size();i++){

            if(nums[i]%2 ==0 && nums[i]%3==0){
                sum = sum+nums[i];
                c++;
            }

        }
        if(c>0){
           int ans = sum/c;
            return ans;

        }
        else{
            return 0;
        }
        
    }
};
