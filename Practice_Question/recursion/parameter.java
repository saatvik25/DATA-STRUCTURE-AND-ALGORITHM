


// parametrised recursion
public class Main
{
	public static void main(String[] args) {
	    int sum =0;
	    func(5,sum);

	}
	static void func(int n,int sum){
	    if(n==0){
	        System.out.println("sum is "+sum);
	        return;
	    }
	    func(n-1,sum+n);
	    	}
}
