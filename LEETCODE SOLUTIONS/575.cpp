


class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int len = candyType.size();
        set<int> s;
        for(int i=0;i<len;i++){
            s.insert(candyType[i]);
        }
        int n = s.size();
        if(n>len/2){
            return len/2;
        }
        else{
            return n;
        }
    }
};
