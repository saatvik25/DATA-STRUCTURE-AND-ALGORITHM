


#include <bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int> &st,int element){
    if(st.empty()){
        st.push(element);
return;
    }
    int num = st.top();
    st.pop();

    // recusrsive call
    insert_at_bottom(st,element);
    st.push(num);
}



void reverse(stack<int> &stack){
    if(stack.empty()){
        return;
    }
    int num = stack.top();
    stack.pop();
    //recusrsive call to reversea stack
    reverse(stack);
    
    // now insert at bottom

    insert_at_bottom(stack, num);


     for(int i =0;i<stack.size();i++){
        cout<<stack.top()<<" "<<endl;
        stack.pop();
    }
}


int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    // for(int i =0;i<s.size();i++){
    //     cout<<s.top()<<" "<<endl;
    //     s.pop();
    // }

    reverse(s);

}
