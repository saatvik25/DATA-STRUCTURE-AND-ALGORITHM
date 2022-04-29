


public class pattern {
    public static void main(String args[]) {

        pattern(5);
        //*        *
        //**      **
        //***    ***
        //****  ****
        //**********
        //**********
        //****  ****
        //***    ***
        //**      **
        //*        *

    }

    public static void pattern(int n) {
        for (int i = 1; i <= n; i++) {

            for (int j = 0; j < i; j++) {
                System.out.print("*");
            }
            int space = 2 * n - 2 * i;
            for (int k = 0; k < space; k++) {
                System.out.print(" ");
            }
            for (int j = 0; j < i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
            for (int i = n; i >=1; i--){
            for (int j =1; j<=i; j++) {
                System.out.print("*");
            }
                int space = 2 * n - 2 * i;
            for(int k =0;k<space ;k++){
                System.out.print(" ");
            }
            for (int j = 0; j < i; j++) {
                System.out.print("*" );
            }
            System.out.println();
    }
}}
