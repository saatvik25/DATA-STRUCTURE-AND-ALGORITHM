//SUM OF DIGITS 


public class Recursion{
    public static void main(String args[]){
 int digit = 253;
 int sum = sum_of_digits(digit);
        System.out.println("sum of digit is :"+ sum);
    }
    public static int sum_of_digits(int n){
        if(n==0){
            return 0;
        }
        return n%10+ sum_of_digits(n/10);
    }



