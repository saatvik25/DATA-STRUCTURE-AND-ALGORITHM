


class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int curr_b = numBottles;
        int empty_b=0;
        int total_full=0;
        while(curr_b){
            // total full
            total_full += curr_b;
            empty_b +=curr_b;
            curr_b=0;
            curr_b +=(empty_b/numExchange);

            empty_b = empty_b%numExchange;
        }
        return total_full;
    }
};
