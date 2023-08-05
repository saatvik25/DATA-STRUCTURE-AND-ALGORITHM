


class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum =0;
        int maxi = INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            maxi = max(maxi,nums[i]);
        }
        while(k--){
            sum += maxi;
            maxi +=1;
        }

        return sum;
    }
};
