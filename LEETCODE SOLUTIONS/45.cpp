


class Solution {
public:
    int jump(vector<int>& nums) {
        int n= nums.size();
        int coverage=0,lastindx=0;
        int dest = n-1;
        int jump=0;
        if(n==1) return 0;
        for(int i=0;i<n;i++){
            coverage = max(coverage,i+nums[i]);
            if(i==lastindx){
                lastindx =  coverage;
                jump++;
                if(coverage >= dest){
                    return jump;

                }
            }
        }
        return jump;

    }
};
