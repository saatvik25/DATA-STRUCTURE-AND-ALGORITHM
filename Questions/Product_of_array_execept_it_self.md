Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
### Alternative Approach and Its Limitation

An alternative way to solve the "Product of Array Except Self" problem is to:

1. Compute the product of all elements in the array.
2. Divide this product by each element to get the result for each position.

For example, with the array `[1, 2, 3, 4]`:
1. Calculate the total product: `1 * 2 * 3 * 4 = 24`.
2. Divide this total product by each element:
   - Result for position 0: `24 / 1 = 24`
   - Result for position 1: `24 / 2 = 12`
   - Result for position 2: `24 / 3 = 8`
   - Result for position 3: `24 / 4 = 6`

### Limittion
However, this approach has a significant limitation. If the total product of the elements is very large, it might exceed the maximum value that can be stored in a variable (which is typically 
2
32
2 
32
  or 
2
64
2 
64
  in most programming languages). This can lead to overflow errors and incorrect results.




## Steps to Solve the Problem
### Create two helper arrays:
#### left_products to store the product of all numbers to the left of each position.
#### right_products to store the product of all numbers to the right of each position.
#### Multiply the corresponding values of left_products and right_products to get the final result.



we store as 
left 1 2 3 4
     1 there is no element left of 1 so move,
     2 there is 1 left of 2 so 1,
     3 left = 2*1,
     4 left is 3*2*1,

same with right

          class Solution {
      public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int>left(n);
        vector<int>right(n);
        left[0]=1;
        for(int i=1;i<n;i++){
            left[i] = left[i-1]*nums[i-1];

        }
        right[n-1] = 1;
        for(int i=n-2;i>-1;i--){
            right[i] = right[i+1]*nums[i+1];

        }
        for(int i=0;i<n;i++){
            ans[i] = left[i]*right[i];
        }
        return ans;
    }
    };


    
     
