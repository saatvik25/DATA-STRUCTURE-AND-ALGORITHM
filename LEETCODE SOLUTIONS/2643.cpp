


class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int index=0;
        int cnt_max=0;
        int r = mat.size();
        int c = mat[0].size();
        for(int i=0;i<r;i++){
             int cnt=0;
            for(int j=0;j<c;j++){
                if(mat[i][j]==1){
                    cnt++;
                       
                }
            }
            if(cnt>cnt_max){
                cnt_max = cnt;
                index=i;
           }
        }
        return {index,cnt_max};
    }
};
