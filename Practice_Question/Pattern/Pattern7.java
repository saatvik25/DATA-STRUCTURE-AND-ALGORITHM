


public class pattern {
    public static void main(String args[]){

        pattern(5);
        //    *
        //   * *
        //  * * *
        // * * * *
        //* * * * *
        //  * * *
        //   * *
        //    *


    }

    public static void pattern(int n){
        for(int i=1;i<= (2*n-1) ;i++) {
            int col;
            if (i > n) {
                col = n - (i - n + 1);
            } else {
                col=i;
            }
            int space = n-col;

            for(int k = 0;k<space;k++){
                System.out.print(" ");
            }
            for (int j = 1; j <=col; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
