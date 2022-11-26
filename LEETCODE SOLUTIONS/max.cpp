


class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // int max =0;
        set<int> s;
        for(auto i :nums){
            s.insert(i);
            
        }
        vector<int> ans;
        for(auto a : s){
            ans.push_back(a);
        }
        // sort(ans.begin(),ans.end());
        int len  = ans.size();
        if(len == 2){
            return ans[1];
        }
        
        if(len >=  3){
            return ans[len-3];
        }
        return ans[len-1];
        // return max;
    }
};
