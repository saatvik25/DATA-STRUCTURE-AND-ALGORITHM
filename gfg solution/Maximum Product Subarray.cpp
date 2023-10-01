


class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long prod=1;
	    long long prod1=1;
	    long long maxi =INT_MIN;
	    for(long i=0;i<n;i++){
	        if(prod ==0) prod =1;
	        if(prod1 ==0) prod1 =1;
	        prod1 *= arr[n-1-i];
	        prod *= arr[i];
	        maxi = max(prod,max(maxi,prod1));
	        
	       // if(prod<0){
	       //     prod = 1;
	       // }
	    }
	    return maxi;
	}
};
