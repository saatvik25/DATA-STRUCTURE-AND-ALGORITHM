


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longests =0;
        // int currnum =0;
        unordered_set<int> s;
        for(int num : nums){
            s.insert(num);
        }        

        for(int num : nums){
            // if num lesser than is prsent than only e start this
             if(!s.contains(num-1)){
               int  currnum = num;
               int currstreak =1;
                    // if next num is presrnt
                while(s.contains(currnum+1)){
                     currnum += 1;
                     currstreak += 1;
                 }
             

                 longests = max(longests,currstreak);
             }
        }

        return longests;
    }
};
