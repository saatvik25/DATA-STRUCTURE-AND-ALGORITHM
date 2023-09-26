// also done by stack


class Solution
{
    public:
    string reverseWord(string str)
    {
        char ch = ' ';
        int end = str.length()-1;
        int start=0;
        while(start<=end){
            ch = str[start];
            str[start] = str[end];
            str[end]= ch;
             start++;
             end--;
            
        }
        return str;
    }
};
