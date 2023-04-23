


class Solution {
public:
    int minimumCost(vector<int>& cost) {
        // int ans =0;
        int sum =0;
        sort(cost.begin(),cost.end(),greater<int>());
        int n = cost.size();
        int count =0;
    //    for(auto i : cost){
    //        count++;
    //        if(count%3 ){
    //            sum += i;
    //        }
    //    }

    for(int i=0;i<n;i++){
        count++;
        if(count%3){
            sum += cost[i];
        }
    }
        return sum;
    }
};
