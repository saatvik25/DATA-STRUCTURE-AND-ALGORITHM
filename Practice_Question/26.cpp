


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=nums[j]){
                // incerement pehle karo phir place par put karo
                j++;
                nums[j] = nums[i];
                
            }
        }
        // as last one is not includede so add +1
        return j+1;

    }
};
