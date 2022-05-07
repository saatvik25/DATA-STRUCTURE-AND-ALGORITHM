


class MyStack {
    ArrayDeque<Integer> p ;

    public MyStack() {
       p = new ArrayDeque<>();
        
    }
    
    public void push(int x) {
        p.addFirst(x);
    }
    
    public int pop() {
      return  p.remove();
        
    }
    
    public int top() {
      return  p.peek();
    }
    
    public boolean empty() {
      return  p.isEmpty();
    }
}

