


class Solution {
public:


    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int sum=0;
        // How to create a min heap for the priority queue?
        // priority_queue <int, vector<int>, greater<int>> gq;
        // for min heap we use this
        priority_queue <int ,vector<int>,greater<int> > pq(nums.begin(), nums.end());
        
        while(k--){
            int x = pq.top();
            pq.pop();
            pq.push(-1* x);
        }
        while(!pq.empty()){
            sum = sum+pq.top();
            pq.pop();

        }
        return sum;
        
    }
};
