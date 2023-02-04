


class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int len1 = str1.length();
        int len2 = str2.length();
        // check weather they are equal not not after concatenation
        if(str1+str2 != str2+str1){
            return "";
        }
        // finf gcd of length and then print 0 to gcdlen
        int gcdlen = gcd(len1,len2);
        string ans = str1.substr(0,gcdlen);
        cout<<ans<<" "<<gcdlen;
        return ans;

        
    }
};
