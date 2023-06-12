string isSubset(int a1[], int a2[], int n, int m) {
    
    bool flag = true;
    int cnt=0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a1[i]]++;
    }
    for(int i=0;i<m;i++){
        
        if(mp[a2[i]]>0){
            mp[a2[i]]--;
            cnt++;
        }
        else{
            flag = false;
           
        }
    }
    
    if(flag == true)
        return "Yes";
        
    else
        return "No";
    
   
    
    
}
