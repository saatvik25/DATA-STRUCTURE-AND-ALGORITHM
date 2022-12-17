


// say digit
#include <bits/stdc++.h>
using namespace std;
void saydigit(int n,string s[]){
if(n==0){
    return;
    }

    int digit = n%10;
    n = n/10;

      saydigit(n,s);

    cout<<s[digit]<<" ";

}
int main(){
    int n;
    cin>>n;
string s[10] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
saydigit(n, s);
return 0;
}
