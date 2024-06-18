Approach
// The approach is to look for every opportunity where the stock price increases from one day to the next.
// If the price on day i is higher than the price on day i-1, you can make a profit by buying on day i-1 
// and selling on day i.



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit= 0;
        int n = prices.size();
        for(int i=1;i<n;i++){
            // in this we compare only back not fron that is i-1 as we staring from i
            if(prices[i]>prices[i-1]){
                profit += prices[i]-prices[i-1];
            }
        }
        return profit;
    }
};
