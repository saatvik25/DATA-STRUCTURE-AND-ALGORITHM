


class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int c=0;
        // size of all
        int n = strs.size() ; 
        // size of each word;
        int k = strs[0].length();
        // pehle letter ko pakda aur sabse check kiya
       for(int i=0;i<k;i++){
        //    sabme check karo
       for(int j=1;j<n;j++){
        //    means jword ,i letter and check in all word in strs
           if(strs[j][i] < strs[j-1][i]){
               c++;
               break;
           }
       } 
       }
       return c;
    }
};
// c b a 
// d a f
// g h i
