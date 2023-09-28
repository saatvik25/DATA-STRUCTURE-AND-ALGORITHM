


class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long n)
    {
     long long count =0;
     int j=0;
     for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
         if(arr[i]>arr[j]){
            //  swap(arr[i],arr[i+1]);
             count++;
         }
         }
     }
     return count;
    }

};
