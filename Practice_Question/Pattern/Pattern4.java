
public class pattern {
    public static void main(String args[]){

        pattern(5);
        //1
        //1 2
        //1 2 3
        //1 2 3 4

    }

    public static void pattern(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<i;j++){
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}
