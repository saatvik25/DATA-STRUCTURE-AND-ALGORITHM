


class Solution {
    
int findSum(int arr[], int n) {
        // code here
        HashSet<Integer> s = new HashSet<>();
        int sum =0;
        for(int i =0;i<n;i++){
            if(!s.contains(arr[i])){
                sum = sum + arr[i];
                s.add(arr[i]);
            }
            
        }
    
        return sum ;
    }
}
