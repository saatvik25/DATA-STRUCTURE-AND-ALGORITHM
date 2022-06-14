
//C++  Without Hashmap 

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        vector<int>ans;
        int s = arr.size();
        int count = 1;
        sort(arr.begin(),arr.end());
        //replace hashmap
        for(int i=0;i<s-1;i++)
        {
            if(arr[i] == arr[i+1])
            {
                count++;
            }
            else
            {
                ans.push_back(count);
                count = 1;
            }
            
            if(i+1 == s-1)
            {
                ans.push_back(count);
            }
        }
        //replace set
        int n = ans.size();
        sort(ans.begin(),ans.end());
        for(int i=0;i<n-1;i++)
        {
            if(ans[i] == ans[i+1])
                return false;
        }
        return true;
    }
};
