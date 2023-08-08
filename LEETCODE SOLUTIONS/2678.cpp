


class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count =0;
        int n =details.size();
        int startIdx = 11; // Starting index of the substring
        int length = 2;   // Length of the substring
        for(int i=0;i<n;i++){
            cout<<details[i]<<endl;
          string sub =  details[i].substr(startIdx,length);
          int age = stoi(sub);
          if(age>60){
              count++;
          }
        
        }
        return count;
    }
};
