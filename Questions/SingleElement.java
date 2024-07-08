// this is the brut force approach that we perform xor, same give 0 and differnt give number
class Solution {
    public int singleNonDuplicate(int[] nums) {
        int result = 0;
        
        for (int num : nums) {
            result ^= num;
        }
        
        return result;
    }
}


To solve the problem of finding the single element in a sorted array where every element appears exactly twice except for one element that appears only once, we need to achieve an O(log n) time complexity with O(1) space complexity. This implies we should use a binary search approach.

### Explanation:

The key idea is to use binary search to efficiently narrow down the position of the single element. Since the array is sorted and every element appears twice except for one, we can take advantage of this property.

### Steps:

1. **Initialize Pointers**:
   - Set two pointers: `left` at the start of the array and `right` at the end of the array.

2. **Binary Search**:
   - Find the middle index `mid` of the current search space.
   - Check if the middle index is even or odd.
   - Based on the even or odd property of `mid`, decide which half of the array to search next:
     - If `mid` is even and `nums[mid]` is equal to `nums[mid + 1]`, the single element must be in the right half.
     - If `mid` is even and `nums[mid]` is not equal to `nums[mid + 1]`, the single element must be in the left half.
     - If `mid` is odd and `nums[mid]` is equal to `nums[mid - 1]`, the single element must be in the right half.
     - If `mid` is odd and `nums[mid]` is not equal to `nums[mid - 1]`, the single element must be in the left half.
   - Adjust the `left` or `right` pointers based on the above conditions.

3. **Terminate the Search**:
   - The loop continues until `left` meets `right`. The single element will be at this position.

### Code Implementation in Java:

```java
class Solution {
    public int singleNonDuplicate(int[] nums) {
        int left = 0, right = nums.length - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            // Check if the mid is even or odd and adjust the pointers accordingly
            if (mid % 2 == 1) {
                mid--; // Ensure mid is even for the comparison
            }
            
            if (nums[mid] == nums[mid + 1]) {
                left = mid + 2; // Move to the right half
            } else {
                right = mid; // Move to the left half
            }
        }
        
        return nums[left]; // left is the position of the single element
    }
}
```

### Example Walkthrough:

#### Example 1:
Input: `nums = [1,1,2,3,3,4,4,8,8]`

- Start: `left = 0`, `right = 8`
- Calculate `mid`: `mid = 4` (even)
- Check: `nums[mid] == nums[mid + 1]` (3 == 3)
- Move to the right half: `left = mid + 2 = 6`

Now:
- `left = 6`, `right = 8`
- Calculate `mid`: `mid = 7` (odd, so `mid--` to make it even)
- Check: `nums[mid] != nums[mid + 1]` (4 != 8)
- Move to the left half: `right = mid = 6`

Now:
- `left = 6`, `right = 6` (termination condition)
- Return: `nums[left] = 2`

