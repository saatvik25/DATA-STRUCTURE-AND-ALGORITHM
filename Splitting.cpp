


class Solution {
public:
    int minimumSum(int num) {
        vector<int> ans;
        int sum =0;
        while(num != 0){
            int rem = num%10;
            num = num/10;
            // cout<<rem<<endl;
            ans.push_back(rem);
        }
        sort(ans.begin(),ans.end());
         for(int i=0;i<ans.size();i++){
             cout<<ans[i];
         }
        sum = (ans[0]*10 + ans[2]) + (ans[1]*10 + ans[3]);  // kyuki hume minimum chayee
        return sum;
    }
};
