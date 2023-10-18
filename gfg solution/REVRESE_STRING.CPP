
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	   string a=S;
        reverse(S.begin(),S.end());
        return a==S;
	}

};
