


#include<bits/stdc++.h>
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int>p;
	    vector<int>nee;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0){
	            nee.push_back(arr[i]);
	        }
	        else{
	            p.push_back(arr[i]);
	        }
	    }
	    int po=0,ne=0,o=0;
	    
	    while(ne<nee.size() && po<p.size()){
	        if(o%2==0){
	            arr[o] = p[po];
	            po++;
	        }else{
	            
	        
	        arr[o] = nee[ne];
	        ne++;
	    }
	    o++;
	}
// 	check for remaining elements
	if(po<p.size()){
	    while(po<p.size()){
	        arr[o++] = p[po++];
	    }
	    
	}
	else if(ne<nee.size()){
	   while(ne<nee.size()){
	       arr[o++] = nee[ne++];
	       
	   } 
	}
	    
	}
};
