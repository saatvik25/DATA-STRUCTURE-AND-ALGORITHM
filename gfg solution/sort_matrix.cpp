


class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        vector<int>ans;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                ans.push_back(Mat[i][j]);
            }
        }
        sort(ans.begin(),ans.end());
        // vector<vector<int>>temp;
        int k=0;
        for(int i=0;i<N;i++){
            // vector<int>a;
            for(int j=0;j<N;j++){
                // a.push_back(ans[i]);
                Mat[i][j] = ans[k];
                k++;
            }
            // temp.push_back(a);
        }
        return Mat;
    }
};
