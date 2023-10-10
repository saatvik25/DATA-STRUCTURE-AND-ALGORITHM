


// basically in this q we have to find the highest frequency and campare with other subarray frequengy and than find max length if it is same
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>left,right,freq;
        int maxi=0;
        int n= nums.size();
        for(int i=0;i<n;i++){
            // we find first index of subarray
            if(left.count(nums[i])==0) left[nums[i]]=i;
            //  we find last index of subarray
            right[nums[i]]=i;
            // toatal frequency of each element
            freq[nums[i]]++;

        }
        // maximum frequency
        for(auto i:freq){
            maxi = max(i.second,maxi);
        }
        int ans = INT_MAX;
        for(auto i:freq){
            if(i.second==maxi){
                ans = min(ans,right[i.first]-left[i.first]+1);
            }
        }

return ans;
    }
};
