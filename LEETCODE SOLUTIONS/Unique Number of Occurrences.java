


class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        Map<Integer,Integer> mp  =new HashMap<>();
        for(int j : arr){
            mp.put(j,mp.getOrDefault(j,0)+1);
        }
        Set<Integer> s = new HashSet<>();
        for(int i : mp.values()){
            if(s.contains(i)){
                return false;
            }
            else{
                s.add(i);
            }
        }
        return true;
    }
}
