


class Solution {
public:
    string addStrings(string num1, string num2) {
        int len1 = num1.length()-1;
        int len2 = num2.length()-1;
        int sum =0;
        int lastdigit ;
        int carry=0;
        string ans;

        while(len1>=0 || len2>=0){
            sum = carry;
            lastdigit = 0;
            if(len1>=0){
                sum = sum+ (num1[len1]- 48);
                len1--;
            }

             if(len2>=0){
                sum = sum+ (num2[len2]- 48);
                len2--;
            }
            lastdigit = sum%10;
            carry = sum/10;
            ans.push_back(lastdigit+48);

        }
            if(carry)
        {
            ans.push_back(carry+48);
        }
        reverse(ans.begin(),ans.end());

        
        return ans;
    }

};
