


class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        long sum=0;
       for(int i=0;i<k;i++){
           sum+=arr[i];
       } 
       long maxsum = sum;
      
      for(int i=k;i<n;i++){
          sum -=arr[i-k];
          sum += arr[i];
          maxsum=max(maxsum,sum);
          
       }
       return maxsum;
       
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
