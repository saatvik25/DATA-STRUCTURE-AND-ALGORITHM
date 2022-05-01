


public class practice {;
    public static void main(String args[]) {
        int arr[] = {7, 3, 2, 4, 9, 12, 56};
        max_min(arr);

    }
        public static void max_min(int arr[]){
        int max = arr[0];
        int min = arr[1];
        for(int i =0;i<arr.length;i++){
            if(arr[i]>max){
                max = arr[i];
            }
            if(arr[i]<min){
                min = arr[i];
            }
        }
            System.out.println("MAX : "+max);
            System.out.println("min : "+min);

        }
    }
