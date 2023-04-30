


class Solution {
public:
// as array is sorted so apply binary search
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int start =0;
        int end = (row*col)-1;
        
        while(start<=end){
            int mid = start + (end-start)/2;
            // / and % give row number and col number and multiplying give index if mid
            int element = matrix[mid/col][mid%col];
            if(element == target){
                return true;
                // cout<<element;
            }
            if(element < target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return false;
    }
};
