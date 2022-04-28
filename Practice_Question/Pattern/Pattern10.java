


public class pattern {
    public static void main(String args[]){

        pattern(5);
        //     *
        //    **
        //   ***
        //  ****
        // *****

    }

    public static void pattern(int n) {
      for(int i = 1;i<=n;i++){
          for(int j=0;j<=n;j++){
              if(j<=n-i){
                  System.out.print(" ");
              }else{
                  System.out.print("*");
              }
          }
          System.out.println();
      }
    }
    }
