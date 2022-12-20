


// //palindrome
#include <bits/stdc++.h>
using namespace std;
bool palindrome(string& str, int start, int end)
{
  // base case

  if (start >  end)
    return  true;

  if(str[start] != str[end]){
    return false;
  }else{
    return palindrome(str,start+1,end-1);
  }

}

int main()
{
  // string str = "abcd";
  string str = "ababa";
  

  bool ispalindrome = palindrome(str , 0, str.length() - 1);
  if(ispalindrome){
     cout<<"it is palndrome"<<endl;

  }
  else{
    cout<<"not a palindrome"<<endl;
  }
  return 0;
}


