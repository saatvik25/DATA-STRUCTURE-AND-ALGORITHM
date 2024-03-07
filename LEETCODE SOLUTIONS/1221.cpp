class Solution {
public:
    int balancedStringSplit(string s) {
        int len = s.size();
        int rcnt =0;
        int lcnt=0;
        int i=0;
        int cnt =0;
        while(i<len){
            
            
            if(s[i] == 'R'){
                rcnt++;
                
            }else{
                lcnt++;

            }
            i++;

             if(lcnt ==rcnt ){
             cnt++;
        }
        }
       
        return cnt;
    }
};
