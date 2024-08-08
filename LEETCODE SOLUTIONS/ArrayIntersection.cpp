vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0, j = 0;

        // Ensure that nums1 and nums2 are sorted
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        while (i < n1 && j < n2) {
            if (nums1[i] == nums2[j]) {
                // To avoid duplicates in the result
                if (ans.empty() || ans.back() != nums1[i]) {
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            } 
            else if (nums1[i] < nums2[j]) {
                i++;
            } 
            else {
                j++;
            }
        }

        return ans;
    }
};
