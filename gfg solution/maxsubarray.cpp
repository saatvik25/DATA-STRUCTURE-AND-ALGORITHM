


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
       long long sum =0;
       long long maxsum = arr[0];
       for(int i=0;i<n;i++){
           sum = sum+arr[i];
           maxsum = max(maxsum,sum);
           if(sum<0){
               sum =0;
           }
       }
       return maxsum;
        
        
    }
};

