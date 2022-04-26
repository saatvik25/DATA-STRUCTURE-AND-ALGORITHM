


public class pattern {
    public static void main(String args[]){

        pattern(5);
        //    1
        //   212
        //  32123
        // 4321234
        //543212345

    }



    public static void pattern(int n){
        for(int i=1;i<= (n) ;i++) {
            int space = n-i;
            for(int j = 0;j<space;j++){
                System.out.print(" ");
            }
            for(int k = i;k>=1;k--){
                System.out.print(k);
            }
            for(int l = 2;l<=i;l++){
                System.out.print(l);
            }
            System.out.println();
        }
    }
}
