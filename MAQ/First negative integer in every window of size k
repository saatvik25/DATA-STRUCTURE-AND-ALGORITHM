vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k) {


int i =0;
int  j = 0;
vector<long long> v;
deque<long long> dq;
while(j<n){
    // agar next window jao to pehla element hatoo dq se
      if(dq.size()>0 && dq.front()==j-k)
         dq.pop_front();
         
    if(arr[j]<0){
        dq.push_back(j);
    }
    if(j-i+1 < k){
        j++;
    }
    else if(j-i+1 == k){
        // agar dq ka size > 0 hai matlab usme -ve hai
        if(dq.size()>0){
            v.push_back(arr[dq.front()]);
        }
        else{
            v.push_back(0);
        
        
        }
        i++;
        j++;
    }
    
}
return v;
                                                 
 }
