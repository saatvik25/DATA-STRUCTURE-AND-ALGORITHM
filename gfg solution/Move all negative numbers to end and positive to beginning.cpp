


class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int res[n];
        int j=0;
        for(int i =0;i<n;i++){
            if(arr[i]>0){
                res[j]=arr[i];
                j++;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                res[j] = arr[i];
                j++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i] = res[i];
        }
    }
    
};
