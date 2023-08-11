


class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> set = {'a','e','i','o','u','A','E','I','O','U'};
        int n = s.size();
        int j = n/2;
        int i=0;
       int count =0;
        while(j<n){a
            if(set.find(s[i]) != set.end()) count++;
            if(set.find(s[j]) != set.end()) count--;
            i++;
            j++;

        }
        // if count ==0 means that the vowels are equal
        if(count == 0 ){
            return true;
        }
        return false;
        
    }
};
