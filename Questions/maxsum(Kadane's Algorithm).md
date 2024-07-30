To solve the problem of finding the subarray with the largest sum, we can use **Kadane's Algorithm**. This algorithm runs in O(n) time complexity and is efficient for this purpose.

Here is the step-by-step explanation along with the code in Java:

### Explanation:

1. **Initialization:**
   - We maintain two variables:
     - `currentSum`: The maximum sum of the subarray ending at the current position.
     - `maxSum`: The maximum sum found so far across all subarrays.

2. **Iterate through the array:**
   - For each element, update `currentSum` by taking the maximum of the current element itself or the current element added to the `currentSum` from the previous step.
   - Update `maxSum` to be the maximum of `maxSum` and `currentSum`.

3. **Return the result:**
   - At the end of the iteration, `maxSum` contains the maximum subarray sum.

### Java Code:

```java
public class Solution {
    public int maxSubArray(int[] nums) {
        // Initialize the variables
        int currentSum = nums[0];
        int maxSum = nums[0];
        
        // Loop through each element starting from the second one
        for (int i = 1; i < nums.length; i++) {
            // Update currentSum to be either the current element itself
            // or the current element plus the previous currentSum
            currentSum = Math.max(nums[i], currentSum + nums[i]);
            
            // Update maxSum if currentSum is greater than maxSum
            maxSum = Math.max(maxSum, currentSum);
        }
        
        // Return the maximum subarray sum
        return maxSum;
    }
}
```

### Example Walkthrough:

Let's take `nums = [-2,1,-3,4,-1,2,1,-5,4]` as an example:

1. **Initial values:**
   - `currentSum = -2`
   - `maxSum = -2`

2. **Iteration:**
   - `i = 1`: `currentSum = max(1, -2 + 1) = 1`, `maxSum = max(-2, 1) = 1`
   - `i = 2`: `currentSum = max(-3, 1 + -3) = -2`, `maxSum = max(1, -2) = 1`
   - `i = 3`: `currentSum = max(4, -2 + 4) = 4`, `maxSum = max(1, 4) = 4`
   - `i = 4`: `currentSum = max(-1, 4 + -1) = 3`, `maxSum = max(4, 3) = 4`
   - `i = 5`: `currentSum = max(2, 3 + 2) = 5`, `maxSum = max(4, 5) = 5`
   - `i = 6`: `currentSum = max(1, 5 + 1) = 6`, `maxSum = max(5, 6) = 6`
   - `i = 7`: `currentSum = max(-5, 6 + -5) = 1`, `maxSum = max(6, 1) = 6`
   - `i = 8`: `currentSum = max(4, 1 + 4) = 5`, `maxSum = max(6, 5) = 6`

3. **Result:**
   - The maximum subarray sum is `6`.

This algorithm efficiently finds the maximum subarray sum with a time complexity of O(n), making it suitable for large input arrays.
