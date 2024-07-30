


Here's a C++ solution for the problem "Smallest Index With Equal Value":

```cpp
class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            if(i%10 == nums[i]){
                 return i;
//  if found than return as it the smallest onlt as it found first
            }
           
        }
        return -1;
    }
};
```

### Explanation:

1. **Initialization**:
   - The function takes a vector `nums` as input and returns an integer.
   - We determine the size of the vector `nums` and store it in `n`.

2. **Loop through the array**:
   - We loop through each index `i` from 0 to `n-1`.
   - For each index, we check if `i % 10 == nums[i]`.
     - `%` is the modulus operator, which returns the remainder when `i` is divided by 10.

3. **Return the result**:
   - If the condition `i % 10 == nums[i]` is satisfied, we return the index `i`.
   - If no such index is found after the loop completes, we return -1.

### Example 1:

Input: `nums = [0, 1, 2]`

- For `i = 0`: `0 % 10 == 0` which matches `nums[0]`.
- Therefore, the function returns 0 as the smallest index.

### Example 2:

Input: `nums = [4, 3, 2, 1]`

- For `i = 0`: `0 % 10 == 0` which does not match `nums[0]`.
- For `i = 1`: `1 % 10 == 1` which does not match `nums[1]`.
- For `i = 2`: `2 % 10 == 2` which matches `nums[2]`.
- Therefore, the function returns 2 as the smallest index.
