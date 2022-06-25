


package com.saatvik;
in java when you create mxn matrices it does not store in continious location as it is  array of array
public class matrix {
   public static void print(int arr[][]){
       for(int i=0;i<arr.length;i++){    //length of all array
           for(int j=0;j<arr[i].length;j++){  //length of array in side arr i.e arr[i]
               System.out.print(arr[i][j]);
           }
       }
   }


   public static void main(String args[]){
int arr[][] = {{1,2,3,4},
             {5,6,7,8}};
        print(arr);

   }
}
