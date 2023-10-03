


class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int X)
    {
        
        sort(arr,arr+n);
        
        int sum =0;
        for(int i=0;i<n;i++){
            int j =i+1;
            int k=n-1;
            while(j<k){
                sum = arr[i]+arr[j]+arr[k];
                if(sum == X){
                return true;
            }else if(sum>X){
                k--;
            }else{
                j++;
            }
            }
            }
            
        
        return false;
    }

};
