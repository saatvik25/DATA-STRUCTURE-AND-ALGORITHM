


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m ;

        for(auto x : magazine){
            m[x]++;
        }

        for(auto i : ransomNote){
            if(!m[i]--){
                return false;
            }
        }
        return true;
        
    }
};
