


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n =nums.size();
        k = k%n;

        // reerse first to n-k element
        reverse(nums.begin(),nums.begin()+n-k);
        //  Reverse the second part of the array from (nums.size() - k) to the end
        reverse(nums.begin()+n-k,nums.end());
        reverse(nums.begin(),nums.end());

    }
};
