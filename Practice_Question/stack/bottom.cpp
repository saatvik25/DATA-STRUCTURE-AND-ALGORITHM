


#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> &s ,int x){
    //base case
    if(s.empty()){
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();

    //recursive call
    solve(s,x);

    s.push(num);
}
void pushAtBottom(stack<int> &s ,int x){
    solve(s,x);
    // return s;
    for(int i=0;i<=s.size();i++){
        cout<<"element is "<<s.top()<<endl;
        s.pop();
    }
}
int main(){
    stack<int> st;
    st.push(7);
    st.push(1);
    st.push(4);
    st.push(5);
cout<<st.size()<<endl;
    pushAtBottom(st,100);
    for(int i=0;i<=st.size();i++){
        cout<<"element is "<<i<<" " <<st.top()<<endl;
        st.pop();
    }

}
