


#include<bits/stdc++.h>
class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        
        int low=0;
        int mid=0;
        int high=array.size()-1;
        while(mid<=high){
            if(array[mid]<a){
                swap(array[mid],array[low]);
                low++;
                mid++;
            }
            else if(array[mid]>=a&&array[mid]<=b){
                mid++;
            }
            else if(array[mid]>b){
                swap(array[mid],array[high]);
                high--;
            }
            
            
        }
    }
};
