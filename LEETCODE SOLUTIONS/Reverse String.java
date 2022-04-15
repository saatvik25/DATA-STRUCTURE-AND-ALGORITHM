//https://leetcode.com/problems/reverse-string/

class Solution {
    public void reverseString(char[] s) {
        int i =0;
        int j = s.length-1;
        char temp[] = new char[1];
        while(i<=j){
            temp[0] = s[i];
            s[i]= s[j];
            s[j]=temp[0];
            i++;
            j--;
        }
        // return char;
    }
}
