


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        // for(int i=0;i<nums1.size();i++){
        //     for(int j =0;i<nums2.size();i++){
        //         if(nums1[i]==nums2[j]){
        //             ans.push_back(nums1[i]);
        //         }
        //     }
        // }
        // return ans;

        if (nums1.size() == 0 || nums2.size() == 0) 
        return vector<int>(0);
        
        unordered_map<int, int> numMap;
        vector<int> Result;
        

        for (int i : nums1)
                numMap[i]++;

        for (int i : nums2)
        {
            if (numMap.find(i) != numMap.end() && numMap[i]-- > 0)
                Result.push_back(i);
        }
        
        return Result;
    }
};
