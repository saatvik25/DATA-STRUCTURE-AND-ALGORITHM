


public class pattern {
    public static void main(String args[]){

        pattern(5);
        //    1
        //   212
        //  32123
        // 4321234
        //543212345
        //  32123
        //   212
        //    1
        //

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
            for (int j = col; j >=1; j--) {
                System.out.print(j+"");
            }
            for(int l = 2;l<=col;l++) {
                System.out.print(l);
            }
            System.out.println();
        }
    }
}
