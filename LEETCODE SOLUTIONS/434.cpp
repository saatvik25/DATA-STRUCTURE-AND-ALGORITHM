


class Solution {
public:
    int countSegments(string s) {
        int word =0;
      for(int i=0;i<s.size();i++){

        //   null character '\0'
        // if first word is not space and i+1 next word is space then word++
        if(s[i] != ' ' && s[i+1] == ' ' || s[i] != ' ' && s[i+1] == '\0' ){
            word++;
        }
      } 
      return word; 
    }
};
