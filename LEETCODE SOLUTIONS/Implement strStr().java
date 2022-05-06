


class Solution {
    public int strStr(String haystack, String needle) {
        if(haystack.length()<needle.length()){
            return -1;
        }
        else{
            return haystack.indexOf(needle);
        }
    }
}
