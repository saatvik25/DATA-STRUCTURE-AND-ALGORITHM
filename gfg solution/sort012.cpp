


class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        int low=0;
        int mid=0;
        int high = n-1;
        for(int i=0;i<n;i++){
            if(arr[mid]==0){
                swap(arr[low],arr[mid]);
                low++;
                mid++;
            }else if(arr[mid]==2){
                swap(arr[high],arr[mid]);
                high--;
                
            }else{
                mid++;;
            }
        }
    }
    
};
