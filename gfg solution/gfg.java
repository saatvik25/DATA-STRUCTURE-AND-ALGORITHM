


class Solution
{
    public static void sort012(int nums[], int n)
    {
        // code here 
        int f=0,m=0;
            int h = nums.length-1;
        int temp;
        while(m<=h){
            switch(nums[m]){  //if nums at m is 0,1,2
                    
            // if(nums[m]==0)
                case 0:
            
                temp = nums[m];
                nums[m]=nums[f];
                nums[f]=temp;
                f++;
                m++;
                break;
            
                case 1:
            
                m++;
                break;
                case 2:
            
                temp=nums[m];
                nums[m]=nums[h];
                nums[h]=temp;
                h--;
                break;
            }
            
        }
    }
}
