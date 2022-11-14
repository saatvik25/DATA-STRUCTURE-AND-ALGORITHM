


queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int> s;
    for(int i=0;i<k;i++){
      int curr = q.front();
      q.pop();
      s.push(curr);
    }
    while(!s.empty()){
        int curr = s.top();
        s.pop();
        q.push(curr);
        
    }
    int t= q.size()-k;
    while(t--){
        int curr = q.front();
        q.pop();
        q.push(curr);
    }
    return q;
}
