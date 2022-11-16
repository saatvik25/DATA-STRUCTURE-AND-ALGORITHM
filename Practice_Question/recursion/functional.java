// add in a function


public class Main
{
	public static void main(String[] args) {
	    
	   System.out.println(func(5));

	}
	static int func(int n){
	    if(n==0){
	        return 0;
	    }
      return n+ func(n-1);
	    	}

