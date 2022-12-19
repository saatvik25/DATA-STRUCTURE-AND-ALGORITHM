


// reverse a string
#include <bits/stdc++.h>
using namespace std;
void reverse(string& str, int start, int end)
{
  // base case
  // cout<<"call for reverse is recieved"<<str<<end;
  if (start >  end)
    return;

  swap(str[start], str[end]);
  reverse(str, start + 1, end - 1);

}
