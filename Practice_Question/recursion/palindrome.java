


public class Recursion {
    public static void main(String args[]){
        String str = "abba";
        System.out.println(ispalindrome(str,0,str.length()-1));
    }
    public static Boolean ispalindrome(String str ,int start,int end){
        if(start>=end){
            return true;
        }
        return (str.charAt(start)==str.charAt(end))&& ispalindrome(str, start+1,end-1);
    }
}
