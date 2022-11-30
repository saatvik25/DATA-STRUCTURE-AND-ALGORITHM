


class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
       int  mi = INT_MAX;
        int ma = 0;
       for(int i=0;i<nums.size();i++){
           mi = min(mi,nums[i]);
           ma = max(ma , nums[i]);
       } 
        mi = mi+k;
        ma = ma-k;
        if(mi>ma){     // agar mi bada hai to 0 return kardo
            return 0;
        }
        else{
            return ma-mi;
        }
    }
};.
