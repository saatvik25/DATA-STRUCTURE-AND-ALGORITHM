class Solution {
    public int firstUniqChar(String s) {
        HashMap<Character,Integer> map = new HashMap<>();
        char s1[] = s.toCharArray();
        for(char c : s1){
            map.put(c,map.getOrDefault(c,0)+1);
        }
        for(int i=0;i<s.length();i++){
            if(map.get(s1[i]) == 1){
                return i;
            }
        }
        return -1;
       }
}
