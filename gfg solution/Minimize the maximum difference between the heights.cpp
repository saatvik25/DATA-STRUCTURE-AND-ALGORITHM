


/ User function template for C++
 // first we sort array
        // then take first and last diff and assume it is  largest
        // now we need to minimize diff so subtract k from last and add k in first 
        // now we try to minus k from 1 to last and plus k from n-2 to first to maximize and minimize
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
       
        sort(arr,arr+n);
        int diff = arr[n-1]-arr[0];
        int maxi ,mini;
        
        for(int i=1;i<n;i++){
            if(arr[i]-k<0) continue;
            maxi = max(arr[i-1]+k,arr[n-1]-k);
            mini = min(arr[i]-k,arr[0]+k);
            
            diff = min(diff,maxi-mini);
        }     
        return diff;
    }
};
