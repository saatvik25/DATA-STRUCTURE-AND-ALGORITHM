// if array is sorted then first approach is to apply bunary search
// q1 Find the celing og a number
public class Main
{
    
    public static void main(String[] args) {
		int arr[] =  {1,4,6,8,9,10,20,30,40};
		int target = 41;
	int ans = celing(arr,target);
	System.out.println("Ceiling of a number is " + ans);

}
    	static int celing(int arr[],int target ){
	    int start = 0;
	    int end = arr.length;
	    int mid;
	   // if target is greater than the last element of array
	   if(target> arr[arr.length-1]){
	       return -1;
	   }
	    while(start<=end){
	        mid = (start+end)/2;
	        if(arr[mid] == target){
	            return arr[mid];
	        }
	      else if(target < arr[mid]){
	            end = mid-1;
	        }
	        else{
	            start = mid+1;
	        }
	    }
	    return arr[start];
	}
		
		
	
	
	
	
}
