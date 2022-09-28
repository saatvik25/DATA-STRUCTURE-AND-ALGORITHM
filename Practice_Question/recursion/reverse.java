// reverse an array


public class Main
{
	public static void main(String[] args) {
	    
	   //System.out.println(func(5));
	   int arr[] = {1,2,3,4,5};
	   reverse(arr,0,arr.length-1);
	   

	}
	static void reverse(int arr[],int l ,int r){
	   if(l>=r){
	       return;
	   }
	   swap(arr,l,r);
	   reverse(arr,l+1,r-1);
	   for(int i:arr){
	       System.out.println(i);
	   }
	    	}
	    	static void swap(int arr[],int l,int r){
	    	    int temp ;
	    	    temp = arr[l];
	    	    arr[l] = arr[r];
	    	    arr[r] = temp;
	    	}
}
