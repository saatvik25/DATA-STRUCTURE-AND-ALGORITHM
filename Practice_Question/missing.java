


class Solution {
    int MissingNumber(int array[], int n) {
        // Your Code Here
      int  res = 0;
        for(int i =1;i<=n;i++){
            res ^=  i;
        }
        for(int j =0;j<n-1;j++){
            res ^=  array[j];
        }
        return res;
    }
}
