


class Solution {
    public boolean repeatedSubstringPattern(String s) {
        String a = s+s;
        String c = a.substring(1 , a.length()-1);
        if(c.contains(s)){
            return true;
        }
        else{
           return false;
        }
    }
}
