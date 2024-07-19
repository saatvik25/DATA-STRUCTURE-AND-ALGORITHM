


Given an array of integers A and an integer B.

Find the total number of subarrays having bitwise XOR of all elements equals to B.



Problem Constraints
1 <= length of the array <= 105

1 <= A[i], B <= 109

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Solution::solve(vector<int> &A, int B) {
    map<int,int>mp;
    int xorr =0;
    int count =0;
    
    for(auto i : A){
        xorr = xorr^i;
    
    if(xorr == B)
        count++;
    
    if(mp.find(xorr^B)!=mp.end())
        count += mp[xorr^B] ;

        
    mp[xorr] +=1;
    
    }
    return count;
}
