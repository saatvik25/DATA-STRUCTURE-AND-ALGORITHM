


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int n = nums.size();
    int i=0;
       int j=0;
       for( i=0;i<n;i++){
           if(nums[i]!=val){
            //    agar same nahi hua to 0 indexing par leaoo
               nums[j] = nums[i];

               j++;
           }
        //    warna kuch na karo
       }
        return j;
    }
};
